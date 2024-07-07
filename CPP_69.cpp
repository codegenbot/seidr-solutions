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
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num; 
    if (num >= 0) {
        std::string buffer = "Result of searching " + std::to_string(num) + ": " + std::to_string(search(num));
        std::cout << buffer << std::endl;
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    return 0;