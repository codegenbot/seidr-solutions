#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num % 10) % 2 != 0 || (num / 10) % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    std::vector<int> nums;
    while(std::cin >> num) {
        nums.push_back(num);
    }
    std::cout << specialFilter(nums) << std::endl;
    return 0;
}