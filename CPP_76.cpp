#include <iostream>
#include <string>

bool isSimplePower(int base, int power); 
bool isSimplePower(int num); 

int simplePowerCheckerMain() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    int num = std::stoi(input);
    if (isSimplePower(num)) {  
        std::cout << input << " is a simple power.\n";
    } else {
        std::cout << input << " is not a simple power.\n";
    }
    return 0;
}

bool isSimplePower(int num) {
    int base = 2;
    while (base * base <= num) {
        if ((base * base) == num) {
            return true;
        }
        for (int power = 1; ; ++power) {
            if ((base * power) == num) {
                return true;
            }
            if ((base * power) > num) {
                break;
            }
        }
        ++base;
    }
    return false;
}