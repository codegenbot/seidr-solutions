#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> input;
    int num;

    std::cout << "Enter numbers (negative to stop):" << std::endl;

    while ((std::cin >> num) && (num >= 0)) {
        input.push_back(num);
    }

    int result = specialFilter(input);

    std::cout << "Count: " << result << std::endl;

    return 0;
}