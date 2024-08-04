#include <iostream>
#include <string>
#include <vector>

std::string int_to_mini_romank(int number);

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    std::string result = int_to_mini_romank(number);
    std::cout << "Roman numeral representation: " << result << std::endl;
    
    return 0;
}