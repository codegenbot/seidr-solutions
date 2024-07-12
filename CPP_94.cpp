```cpp
#include <iostream>
#include <vector>

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

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst; // initialize here
    int num, maxPrime = 0;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) {
            break;
        }
        lst.push_back(num);
        for (int n : lst) {
            if (isPrime(n)) {
                if (n > maxPrime) {
                    maxPrime = n;
                }
            }
        }
    }
    std::cout << "The sum of digits is: " << sumOfDigits(maxPrime) << std::endl;
    return 0;
}