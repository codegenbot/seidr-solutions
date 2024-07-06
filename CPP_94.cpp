#include <vector>
#include <iostream>
#include <algorithm>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxNum = 0;
    for (int num : lst) {
        if (num > maxNum) {
            maxNum = num;
        }
    }

    int sumOfDigits = 0;
    while (maxNum > 0) {
        sumOfDigits += maxNum % 10;
        maxNum /= 10;
    }

    return sumOfDigits;
}

int main_test() {
    std::vector<int> lst;
    std::cout << "Enter the list of numbers (space separated): ";
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    
    if(lst.empty()) {
        std::cout << "List is empty." << std::endl;
    } else {
        std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(std::vector<int>(lst.begin(), lst.end())) << std::endl;
    }
    return 0;
}