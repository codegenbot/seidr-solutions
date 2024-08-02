#include <vector>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    int num;
    std::vector<int> nums;
    std::cout << "Enter numbers separated by space: ";
    while(std::cin >> num) {
        nums.push_back(num);
    }
    std::cout << "The count of special numbers is: " << specialFilter(nums) << std::endl;
    return 0;
}