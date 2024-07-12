#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count = 0;

    // Take input from user
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }

    std::cout << "Count: " << count << std::endl;

    return 0;
}