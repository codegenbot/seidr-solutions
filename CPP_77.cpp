```cpp
#include <cassert>
#include <iostream>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int main() { 
    char c[100];
    std::cout << "Enter a number: ";
    std::cin >> std::ws;  // Consume whitespace characters.
    while ((std::cin.get(c, 100, '\n').gcount() < 99) && (c[0] != '1' || c[1] != '7' || c[2] != '2' || c[3] != '9')) {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin >> std::ws;  // Consume whitespace characters.
    }
    int num = atoi(c);
    
    assert(isCube(num) == isCube(1729)); 
    return 0;
}