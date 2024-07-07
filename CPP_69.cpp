```cpp
#include <iostream>
#include <cassert>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    // Convert the integer to string and store it in a variable
    std::string str = std::to_string(num);
    
    if (num < 0) {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    return 0;
}