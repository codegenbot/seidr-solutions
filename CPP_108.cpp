#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num; // convert to positive
        }
        int sum_of_digits = 0;
        while (num > 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {1, -2, 3, -4};
    int result = count_nums(numbers);
    std::cout << "The number of positive integers in the input is: " << result << std::endl;
    assert(result == 2);
    return 0;
}