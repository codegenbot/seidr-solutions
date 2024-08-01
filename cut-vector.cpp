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
            for (int j = i + 1; j < n; j++) {
                right.push_back(nums[j]);
            }
            result.push_back(left);
            result.push_back(right);
        } else if (nums[i] == nums[0]) {
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 0; j < i; j++) {
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
        } else if (i == 0) {
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 0; j < i; j++) {
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
            for (int j = 0; j < i; j++) {
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
            vector<int> right({nums[i]});
            for (int j = i + 1; j < n; j++) {
                right.push_back(nums[j]);
            }
            result.push_back(left);
            result.push_back(right);
        } else {
            int min_diff = INT_MAX, cut_index = -1;
            for (int j = 0; j < i; j++) {
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
    std::cout << "Enter the size of array: ";
    int n;
    std::cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> nums[i];
    }
    
    vector<vector<int>> result = cutVector(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            std::cout<<result[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    return 0;
}