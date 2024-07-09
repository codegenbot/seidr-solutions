#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool isSame(const vector<float>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[0])
            return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    
    if (isSame(numbers)) {
        return {numbers[0], numbers[0]};
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] - numbers[i-1] < min_diff) {
            min_diff = numbers[i] - numbers[i-1];
            closest_pair = {numbers[i-1], numbers[i]};
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> numbers = {};
    // Read input from user
    // ...

    vector<float> result = find_closest_elements(numbers);
    
    cout << "The closest pair of elements is: ";
    for (float num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}