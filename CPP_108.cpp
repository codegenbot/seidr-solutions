#include <iostream>
#include <vector>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 1)
                ++count;
        } else {
            num = -num; 
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (!is_negative) {
                    sum += num % 10;
                }
                num /= 10;
                is_negative = !is_negative;
            }
            if (sum > 1)
                ++count;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {1, -2, 3};
    int result = count_nums(numbers);
    std::cout << "Result: " << result << std::endl;
    return 0;
}