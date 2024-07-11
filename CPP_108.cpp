```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            bool negative = false;
            int sum = 0;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                    negative = !negative;
                }
                sum += digit;
                num /= 10;
            }
            if (!negative && sum > 0 || negative && sum >= 1) {
                count++;
            }
        } else {
            bool negative = true;
            int sum = 0;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> n = {123, -456, 789, -90123};
    int result = count_nums(n);
    std::cout << "The count of positive numbers is: " << result << std::endl;
    return 0;
}