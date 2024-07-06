#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int largestPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }
    int sumOfDigitsLargestPrime = 0;
    while (largestPrime > 0) {
        sumOfDigitsLargestPrime += largestPrime % 10;
        largestPrime /= 10;
    }
    return sumOfDigitsLargestPrime;
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