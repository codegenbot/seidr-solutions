```cpp
#include <cassert>
#include <vector>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int findMaxPrime(const std::vector<int>& numbers) {
    int maxPrime = -1;
    for (int number : numbers) {
        if (isPrime(number))
            maxPrime = number;
    }
    return maxPrime;
}

#include <iostream>

int main() {
    std::cout << "Enter a sequence of numbers (space separated): ";
    int num;
    std::vector<int> numbers;
    while(std::cin >> num) {
        numbers.push_back(num);
    }
    if (!numbers.empty()) {
        int maxPrime = findMaxPrime(numbers);
        int sumOfDigitsInMaxPrime = sumOfDigits(maxPrime);
        std::cout << "Sum of digits in the maximum prime number is: " << sumOfDigitsInMaxPrime << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }
    return 0;
}