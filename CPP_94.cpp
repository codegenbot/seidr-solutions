#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime)
                maxPrime = num;
        }
    }
    
    return isSumOfDigits(maxPrime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int isSumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
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