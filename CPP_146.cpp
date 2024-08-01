#include <vector>
#include <iostream>

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {11, 12, 13, 14, 15};
    int count = specialFilter(nums);
    std::cout << "The count is: " << count << std::endl;
    return 0;
}