#include <iostream>
#include <vector>
#include <string>

int calculateSumOfDigitsLargestPrime(const std::vector<int>& lst) {
    int max_prime = -1;
    for (int num : lst) {
        if (is_prime(num)) {
            if (num > max_prime)
                max_prime = num;
        }
    }

    int sum_of_digits = 0;
    while (max_prime > 0) {
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }

    return sum_of_digits;
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

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}