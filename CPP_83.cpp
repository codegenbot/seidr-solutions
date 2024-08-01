#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n - 1 >= 0)) {
            count += 1;
        }
        if ((i > 1 && i < 10) && (n - 2 >= 0)) {
            for (int j = 1; j <= 9; j++) {
                if (j == 1 || j % 10 == 1) {
                    count += 1;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n) << std::endl;
    return 0;
}