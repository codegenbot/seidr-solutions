#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers);

bool issame(pair<float, float> a, pair<float, float> b);

int main() {
    vector<float> numbers = {4.5, 2.1, 8.7, 1.5, 6.3, 9.2};
    pair<float, float> result = find_closest_elements(numbers);
    cout << result.first << " " << result.second << endl;
    return 0;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_elements;
}

bool issame(pair<float, float> a, pair<float, float> b) {
    return (a.first == b.first && a.second == b.second);
}