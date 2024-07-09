#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums = {1, -11, 2, -12, 3, 14};
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    std::cout << "Count: " << count << std::endl;
    return 0;
}