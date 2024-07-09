```cpp
#include <iostream>
#include <string>
#include <cmath>

bool isSimplePower(int num) {
    for(int base = 2; base * base <= num; ++base) {
        int power = 1;
        while (power * base <= num) {
            if ((power * base) == num) {
                return true;
            }
            ++power;
        }
    }
    return false;
}

int main() { 
    int num; 
    std::cout << "Enter a number: "; 
    if (!(std::cin >> num)) { 
        std::cerr << "Invalid input. Exiting.\n"; 
        return 1; 
    } 
    if (isSimplePower(num)) {  
        std::cout << std::to_string(num) << " is a simple power.\n";
    } else {
        std::cout << std::to_string(num) << " is not a simple power.\n";
    }
    return 0;
}