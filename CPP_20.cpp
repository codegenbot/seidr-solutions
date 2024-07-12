#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    vector<float> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    float min_diff = sortedNumbers[1] - sortedNumbers[0];
    pair<float, float> result = {sortedNumbers[0], sortedNumbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (sortedNumbers[i + 1] - sortedNumbers[i] < min_diff) {
            min_diff = sortedNumbers[i + 1] - sortedNumbers[i];
            result = {sortedNumbers[i], sortedNumbers[i + 1]};
        }
    }
    return {result.first, result.second};
}
