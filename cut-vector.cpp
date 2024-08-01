```
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            vector<int> left({nums[i]});
            vector<int> right;
            if (i != n - 1) {
                for (int j = i + 1; j < n; j++) {
                    right.push_back(nums[j]);
                }
            } else {
                result.push_back(left);
                result.push_back(right);
                return result;
            }
            result.push_back(left);
            result.push_back(right);
        } else if (nums[i] == nums[0]) {
            vector<int> left;
            for (int j = 0; j <= i; j++) {
                left.push_back(nums[j]);
            }
            vector<int> right;
            for (int j = i + 1; j < n; j++) {
                right.push_back(nums[j]);
            }
            result.push_back(left);
            result.push_back(right);
        } else if (i == 0) {
            vector<int> left;
            for (int j = 0; j < i; j++) {
                left.push_back(nums[j]);
            }
            vector<int> right;
            for (int j = i + 1; j < n; j++) {
                right.push_back(nums[j]);
            }
            result.push_back(left);
            result.push_back(right);
        } else if (i == n - 1) {
            vector<int> left;
            for (int j = 0; j < i; j++) {
                left.push_back(nums[j]);
            }
            vector<int> right({nums[i]});
            result.push_back(left);
            result.push_back(right);
        } else {
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 0; j <= i; j++) {
                int diff = nums[j] - nums[i];
                if (diff < min_diff) {
                    min_diff = diff;
                    cut_index = j;
                }
            }
            vector<int> left;
            for (int j = 0; j <= cut_index; j++) {
                left.push_back(nums[j]);
            }
            vector<int> right;
            for (int j = i + 1; j < n; j++) {
                right.push_back(nums[j]);
            }
            result.push_back(left);
            result.push_back(right);
        }
    }
    
    return result;
}

int main() {
    // Example inputs
    vector<int> nums1 = {1};
    vector<int> nums2 = {1, 10};
    vector<int> nums3 = {1, 100};
    vector<int> nums4 = {1, 1000};
    vector<int> nums5 = {1, 10000};

    // Call the function
    std::vector<std::vector<int>> result1 = cutVector(nums1);
    std::vector<std::vector<int>> result2 = cutVector(nums2);
    std::vector<std::vector<int>> result3 = cutVector(nums3);
    std::vector<std::vector<int>> result4 = cutVector(nums4);
    std::vector<std::vector<int>> result5 = cutVector(nums5);

    // Print the results
    std::cout << "Input 1: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (const auto &v : result1) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 2: ";
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (const auto &v : result2) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 3: ";
    for (int num : nums3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (const auto &v : result3) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 4: ";
    for (int num : nums4) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (const auto &v : result4) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 5: ";
    for (int num : nums5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (const auto &v : result5) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}