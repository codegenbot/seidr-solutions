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
    vector<int> nums = {1, 2, 3, 4, 5};
    int count = specialFilter(nums);
    std::cout << "Count: " << count << std::endl;
    return 0;
}