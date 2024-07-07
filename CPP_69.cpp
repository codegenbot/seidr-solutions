#include <iostream>
#include <cassert>

int search(int n) {
    return n;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num; 
    if (num >= 0) {
        std::cout << "The value is " << search(num) << "." << std::endl;
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    int testValue = 10; 
    assert(search(testValue) == testValue);
    return 0;
}