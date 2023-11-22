#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    std::vector<int> result;
    int n = nums.size();
    int max_so_far = nums[n-1];
    result.push_back(max_so_far);

    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= max_so_far) {
            max_so_far = nums[i];
            result.push_back(max_so_far);
        }
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> leadersVector = leaders(nums);
    std::cout << leadersVector.size() << std::endl;
    for (int leader : leadersVector) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;

    return 0;
}