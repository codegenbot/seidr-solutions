```cpp
#include <iostream>
#include <string>

int compare_one(std::string str, int num); 

int main() { 
    std::cout << "Enter the first string: "; 
    std::string str1; 
    std::cin >> str1; 

    std::cout << "Enter the second integer: "; 
    int num2; 
    std::cin >> num2; 

    if (num2 < 0) 
        std::cout << "Error: Please enter a non-negative number." << std::endl; 
    else 
        std::cout << compare_one(str1, num2) << std::endl; 

    return 0; 
}

int compare_one(std::string str, int num) { 
    if (num == 1) {
        for (char c : str) {
            if (isupper(c)) {
                std::cout << tolower(c);
            } else {
                std::cout << c;
            }
        }
    } else {
        std::cout << str;
    }
}