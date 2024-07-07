```cpp
#include <iostream>
#include <cassert>
#include <vector>

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
        
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    int testValue = 10; 
    assert(search(testValue) == testValue);
    return 0;
}