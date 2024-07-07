```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
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
    vector<int> nums = {0,6,6,-76,-21,23,4};
    cout << "Sorted array: ";
    for(int num : order_by_points(nums)) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}