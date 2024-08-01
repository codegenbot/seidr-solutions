#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
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
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 1; j <= i; j++) {
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
        } else if (i == n - 1) {
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 0; j <= i; j++) {
                int diff = nums[i] - nums[j];
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
            right.push_back(nums[i]);
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
    vector<int> nums3 = {1, 2, 3, 4, 5};
    vector<int> nums4 = {1, 2, 10, 11};
    vector<int> nums5 = {1, 2, 3, 4, 5, 6};

    std::cout << "Input 1: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Output 1: ";
    for (vector<int> vec : cutVector(nums1)) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 2: ";
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Output 2: ";
    for (vector<int> vec : cutVector(nums2)) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 3: ";
    for (int num : nums3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Output 3: ";
    for (vector<int> vec : cutVector(nums3)) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 4: ";
    for (int num : nums4) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Output 4: ";
    for (vector<int> vec : cutVector(nums4)) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Input 5: ";
    for (int num : nums5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Output 5: ";
    for (vector<int> vec : cutVector(nums5)) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}