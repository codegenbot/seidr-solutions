#include <vector>
#include <iostream>

int main() {
    int maxPrime = 0;
    std::vector<int> lst;
    int num;
    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    std::cout << "Sum of digits in the largest prime number: " << sumOfDigits(maxPrime) << std::endl;
    return 0;
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