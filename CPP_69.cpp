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
    std::cout << "Enter a positive number: ";
    int temp = 0; 
    std::cin >> temp; 
    if (temp < 0) {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    return 0;
}