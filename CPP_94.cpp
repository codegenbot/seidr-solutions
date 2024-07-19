#include <vector>
#include <iostream>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> test1 = {2, 3, 5, 7};
    std::cout << skjkasdkd(test1) << std::endl;

    std::vector<int> test2 = {4, 6, 8, 9};
    std::cout << skjkasdkd(test2) << std::endl;

    return 0;
}