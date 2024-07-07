```cpp
#include <iostream>
#include <cassert>

int search() {
    int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n; 
    if (n >= 0) {
        return n;
    } else {
        return -1;
    }
}

int main() {
    int num = search();
    std::cout << "Result of searching: " << num << std::endl;
    return 0;
}