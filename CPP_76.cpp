```
#include <cmath>
#include <iostream>

bool isSimplePower(int x) {
    for (int i = 2; i <= sqrt(x); ++i) {
        int n = 0;
        while (pow(i, n) <= x) {
            if (pow(i, n) == x) {
                return true;
            }
            n++;
        }
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (isSimplePower(std::stoi(input))) {
        std::cout << input << " is a simple power.\n";
    } else {
        std::cout << input << " is not a simple power.\n";
    }
    return 0;
}