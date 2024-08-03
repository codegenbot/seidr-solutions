#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    float min_diff = numbers[1] - numbers[0];
    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return closest_pair;
}

bool issame(pair<float, float> a, pair<float, float> b) {
    return (a.first == b.first && a.second == b.second);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), make_pair(2.2, 3.1));

    cout << "All tests passed successfully!" << endl;
    return 0;
}