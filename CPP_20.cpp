#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return result;
}

void solveProblem() {
    pair<float, float> closest_elements = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    assert(closest_elements == make_pair(2.2f, 3.1f));
    cout << "Closest elements are: " << closest_elements.first << " and " << closest_elements.second << endl;
}