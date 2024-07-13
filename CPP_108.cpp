```cpp
#include <vector>
#include <iostream>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (abs(num) > 0) {
                if (abs(num) % 10 != 0)
                    sum += sign * (abs(num) % 10);
                num /= 10;
                sign = -sign;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> n;
    int input;
    std::cout << "Enter numbers separated by space: ";
    while(std::cin >> input) {
        n.push_back(input);
    }
    std::cout << "Count of nums: " << count_nums(n) << std::endl;
    return 0;
}