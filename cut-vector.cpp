#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    int sum = 0;
    while (!std::cin.eof()) {
        std::cin >> n;
        nums.push_back(n);
        sum += n;
    }

    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    std::vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvec2(nums.begin() + idx + 1, nums.end());

    for (int num : subvec1) {
        std::cout << num << std::endl;
    }
    for (int num : subvec2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}