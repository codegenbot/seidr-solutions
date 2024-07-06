```cpp
#include <iostream>
#include <vector>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int max_prime = 0;
    for (auto num : lst) {
        bool is_prime = true;
        if (num > 1) {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        } else {
            is_prime = false;
        }
        if (is_prime && num > max_prime) {
            max_prime = num;
        }
    }
    int sum_digits_max_prime = 0;
    while (max_prime > 0) {
        sum_digits_max_prime += max_prime % 10;
        max_prime /= 10;
    }
    return sum_digits_max_prime;
}

int main_test() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}