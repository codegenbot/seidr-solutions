```
#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            if (sum > 0)
                has_positive_sum = true;
        } else {
            int sum = 0, sign = 1;
            int temp = -num;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit < 0)
                    sign = -1;
                sum += sign * digit;
                temp /= 10;
            }
            if (sum > 0)
                has_positive_sum = true;
        }
        if (has_positive_sum)
            count++;
    }
    return count;
}

int main() {
    std::vector<int> numbers;
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    int result = count_nums(numbers);
    std::cout << "Number of positive sums: " << result << std::endl;
    return 0;
}