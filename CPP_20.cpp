#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers);

bool are_same(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 5.7};
    pair<float, float> result = find_closest_elements(numbers);
    cout << "Closest elements are: " << result.first << " and " << result.second << endl;
    
    assert(are_same(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));

    return 0;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_elements;
}