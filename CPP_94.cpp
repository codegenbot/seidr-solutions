```cpp
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
    std::vector<int> test2 = {11, 13, 17};
    
    int result1 = skjkasdkd(test1);
    int result2 = skjkasdkd(test2);

    std::cout << "Test 1: The sum of the digits in the largest prime number is " << result1 << std::endl;
    std::cout << "Test 2: The sum of the digits in the largest prime number is " << result2 << std::endl;

    return 0;
}