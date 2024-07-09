```cpp
#include <iostream>
#include <string>

bool isSimplePower(int num) {
    for (int base = 2; base * base <= num; ++base) {
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
    std::string input = std::to_string(num); 
    if (isSimplePower(std::stoi(input))) {  
        std::cout << num << " is a simple power.\n";
    } else {
        std::cout << num << " is not a simple power.\n";
    }
    return 0;
}