#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <cassert>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) return {}; // Edge case where fewer than 2 elements
    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> numbers;
    float num;
    while (cin >> num) {
        numbers.push_back(num);
    }
    vector<float> result = find_closest_elements(numbers);
    for (float n : result) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}