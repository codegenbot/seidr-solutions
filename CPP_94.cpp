#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = -1;
    for(int i = 0; i < lst.size(); i++) {
        bool isPrime = true;
        for (int j = 2; j <= std::sqrt(lst[i]); j++) {
            if (lst[i] % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime && lst[i] > maxPrime)
            maxPrime = lst[i];
    }

    int sumOfDigits = 0;
    while(maxPrime > 0) {
        sumOfDigits += (maxPrime % 10);
        maxPrime /= 10;
    }
    
    return sumOfDigits;
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