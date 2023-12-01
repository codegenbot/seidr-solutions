#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int largest_prime = 0;
    for (int num : lst) {
        if (is_prime(num) && num > largest_prime) {
            largest_prime = num;
        }
    }
    return sum_of_digits(largest_prime);
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}