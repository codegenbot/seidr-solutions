#include <iostream>

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 2 ? (i != 1 && i % 100 != 1) : true)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "The number of n-digit integers that start or end with 1 is: " << startsOneEnds(n) << std::endl;
    return 0;
}