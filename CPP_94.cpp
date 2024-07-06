#include <iostream>
#include <vector>
#include <initializer_list>
#include <ostream>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int largestPrime(std::vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            maxPrime = i > maxPrime ? i : maxPrime;
        }
    }
    return maxPrime;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = largestPrime(lst);
    return sumOfDigits(maxPrime);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (auto &i : lst)
        std::cin >> i;
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}