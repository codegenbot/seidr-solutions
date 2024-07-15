#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits> // Include for INT_MAX
using namespace std;

int main() {
    std::vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    if (nums.size() == 1) {
        std::vector<int> subvector1(nums.begin(), nums.end());
        std::vector<int> subvector2;
        
        for (int num : subvector1) {
            std::cout << num << std::endl;
        }
        
        for (int num : subvector2) {
            std::cout << num << std::endl;
        }
        
        return 0;
    }
    
    for (int i = 0; i < nums.size(); ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - half_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    std::vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << std::endl;
    }
    
    for (int num : subvector2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}