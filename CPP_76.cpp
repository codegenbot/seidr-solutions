```c++
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
    std::cin >> num; 
    if (isSimplePower(num)) {  
        std::cout << num << " is a simple power.\n";
    } else {
        std::cout << num << " is not a simple power.\n";
    }
    return 0;
}