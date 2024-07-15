#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<float> a, vector<float> b);

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {result.first, result.second};
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> nums = {3.5, 2.1, 4.9, 1.8, 3.0};
    pair<float, float> closest_pair = find_closest_elements(nums);
    cout << "Closest pair: " << closest_pair.first << ", " << closest_pair.second << endl;
    return 0;
}