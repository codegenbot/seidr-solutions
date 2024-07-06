#include <vector>
#include <iostream>
#include <algorithm>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int largestPrime = -1, sum = 0;

    for (int num : lst) {
        for (int digit : {num}) {
            if (isPrime(digit)) {
                if (digit > largestPrime)
                    largestPrime = digit;
            }
        }
    }

    while (largestPrime > 0) {
        sum += largestPrime % 10;
        largestPrime /= 10;
    }

    return sum;
}

int main_test() {
    int num;
    std::cout << "Enter the list of numbers (space separated): ";
    std::cin >> num;

    // code to read the vector
    std::vector<int> lst = {num};

    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}