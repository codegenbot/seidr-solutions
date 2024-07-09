#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num != 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    vector<int> nums = {12, 34, 5};
    cout << "Input: ";
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> res = order_by_points(nums);

    cout << "Output: ";
    for (auto num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;