#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> nums;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    int num;
    
    while (iss >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_idx = -1;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_idx = i;
            break;
        }
    }

    std::vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
    std::vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

    for (int num : subvec1) {
        std::cout << num << std::endl;
    }
    for (int num : subvec2) {
        std::cout << num << std::endl;
    }

    return 0;
}