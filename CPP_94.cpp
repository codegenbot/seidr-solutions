#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = -1, sum = 0;
    for (auto num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime)
                maxPrime = num;
            int digitSum = 0;
            while (num > 0) {
                digitSum += num % 10;
                num /= 10;
            }
            sum = std::max(sum, digitSum);
        }
    }
    return sum;
}

int main_test() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}