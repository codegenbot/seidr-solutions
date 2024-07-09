#include <iostream>
#include <string>
#include <cmath>

bool isSimplePower(int num);
bool isSimplePower(int base, int power);

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

bool isSimplePower(int base, int power) {
    int num = (int)pow(base, power);
    return num == 1; 
}