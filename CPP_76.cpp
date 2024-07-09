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
    char input[256];
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