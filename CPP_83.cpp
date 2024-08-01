#include <iostream>

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n >= 2)) {
            count += 1;
        }
        if ((i > 1 && i < 10) && (n >= 3)) {
            for (int j = 0; j <= 9; j++) {
                if ((j == 1 || j % 10 == 1) && (n - 1 >= 2)) {
                    count += 1;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "The number of n-digit integers that start or end with 1 is: " << startsOneEnds(n) << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }
    return 0;
}