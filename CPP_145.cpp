```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sum, i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}

int main() {
    vector<int> numbers = {2, 4, -5};
    vector<int> expected_result = {-5, 2, 4};
    if (issame(order_by_points(numbers), expected_result)) {
        std::cout << "The order of numbers by their digital sum is correct.\n";
    } else {
        std::cout << "There is an error in the order of numbers by their digital sum.\n";
    }
    
    return 0;
}