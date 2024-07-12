#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) {
            break;
        }
        lst.push_back(num);
    }
    std::cout << "The sum of digits is: " << skjkasdkd(lst) << std::endl;
    return 0;
}