```cpp
#include <iostream>
#include <cassert>
#include <string>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    std::string strNum;
    int num = 0; // default value
    
    std::cout << "Enter a positive number: ";
    std::cin >> strNum; 

    try {
        num = stoi(strNum);
        if (num >= 0) {
            std::cout << "Result of searching " << num << ": " << search(num) << std::endl;
        } else {
            std::cout << "The search function returns -1 for negative numbers." << std::endl;
        }
    } catch (std::invalid_argument& ia) {
        std::cout << "Invalid number format. Please enter a valid positive number." << std::endl;
    }
    
    return 0;
}