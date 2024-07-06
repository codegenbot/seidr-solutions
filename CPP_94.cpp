```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = 0, sum = 0;
    for (int n : lst) {
        if (isPrime(n)) {
            if (n > maxPrime) maxPrime = n;
            int digitSum = 0;
            while (n > 0) {
                digitSum += n % 10;
                n /= 10;
            }
            sum = std::max(sum, digitSum);
        }
    }
    return sum;
}

int main_test(std::vector<int> lst) {
    std::cout << "Enter the list of numbers (space separated): ";
    std::string input;
    getline(std::cin, input);
    
    for (int i = 0; i < input.size(); i++) {
        int num = std::stoi(input.substr(i));
        lst.push_back(num);
    }
    
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}