#include <iostream>
#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < std::pow(10, n); j++) {
            int num = i * static_cast<int>(std::pow(10, n - 1)) + j;
            if ((num / static_cast<int>(std::pow(10, n - 1))) % 10 == 1 || num % 10 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Number of numbers that start with or end with '1' in range (1-" << pow(10, n) << "): " << starts_one_ends(n) << "\n";
    return 0;
}