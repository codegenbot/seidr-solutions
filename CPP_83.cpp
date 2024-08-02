#include <iostream>

int startsOneEnds(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if ((i >= 10 && i % 10 == 1) || i / 10 == 1)
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Count of numbers starting or ending with 1: " << startsOneEnds(n) << std::endl;
    return 0;
}