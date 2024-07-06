#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        bool isPrime = true;
        if (i <= 1)
            isPrime = false;
        else
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0)
                    isPrime = false;
                    break;
            }
        if (isPrime && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while (maxPrime) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main_test() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}