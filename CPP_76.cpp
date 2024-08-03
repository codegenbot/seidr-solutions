#include <cmath>
#include <iostream>

bool isSimplePower(int x) {
    for (int i = 2; i <= x; i++) {
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
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (isSimplePower(x)) {
        std::cout << x << " is a simple power." << std::endl;
    } else {
        std::cout << x << " is not a simple power." << std::endl;
    }
    return 0;
}