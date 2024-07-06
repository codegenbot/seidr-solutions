#include <iostream>
#include <vector>
#include <string>

int calculateSumOfDigitsLargestPrime(const std::vector<int>& lst) {
    int max_num = *std::max_element(lst.begin(), lst.end());
    
    int sum_of_digits = 0;
    while (max_num > 1) {
        int temp_sum = 0;
        for (; max_num > 0; ) {
            int digit = max_num % 10;
            if (digit != 0) temp_sum += digit;
            max_num /= 10;
        }
        sum_of_digits += temp_sum;
        while (temp_sum > 1 && isPrime(temp_sum)) {
            for (; temp_sum > 0; ) {
                int digit = temp_sum % 10;
                if (digit != 0) temp_sum -= digit;
                temp_sum /= 10;
            }
            sum_of_digits += temp_sum + 1;
            break;
        }
    }
    return sum_of_digits;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
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