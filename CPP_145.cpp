```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sumOfDigits, nums[i]);
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> nums[i];
    }

    if(issame(nums, order_by_points(nums))) {
        cout << "The array is same after ordering by points." << endl;
    } else {
        vector<int> ordered = order_by_points(nums);
        for(int i : ordered) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}