```cpp
#include <iostream>
#include <vector>
#include <string>

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

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if(isPrime(num) && num > maxPrime)
            maxPrime = num;
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i=2; i*i<=num; i++)
        if(num%i == 0)
            return false;
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