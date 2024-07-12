#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count = 0;

    std::cout << "Enter numbers (enter -1 to finish):" << std::endl;

    while (true) {
        int num;
        std::cin >> num;

        if (num == -1)
            break;

        nums.push_back(num);
    }

    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }

    std::cout << "The count is: " << count << std::endl;

    return 0;
}