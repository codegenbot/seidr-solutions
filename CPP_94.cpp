#include <iostream>
#include <vector>
#include <cmath>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int max = 0;
    for (int num : lst) {
        if (isPrime(num) && num > max)
            max = num;
    }
    int sum = 0;
    while (max != 0) {
        sum += max % 10;
        max /= 10;
    }
    return sum;
}

int main_test() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}