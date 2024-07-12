#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    pair<float, float> result = {sorted_numbers[0], sorted_numbers[1]};
    for (int i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            result = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> numbers = {3.2, 1.5, 7.8, 4.9, 2.3};
    pair<float, float> closest = find_closest_elements(numbers);
    cout << "Closest elements: " << closest.first << " and " << closest.second << endl;

    return 0;
}