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
    std::cin >> num; 
    if (num < 0) {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    } else {
        int result = search(num);
        std::cout << "Result of searching " << num << ": " << result << std::endl;
    }
    return 0;
}