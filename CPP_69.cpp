```c++
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
    std::cin >> num; 
    if (num >= 0) {
        assert(search(10) == 10);
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    return 0;
}