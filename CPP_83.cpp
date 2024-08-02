#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 1 ? i / 10 != 1 : true)) {
            count++;
        }
        for (int j = 0; j < n - 1; j++) {
            count++;
            if (j + 2 <= n) {
                if ((i == 1 || i % 10 == 1) && (n > 1 ? i / 10 != 1 : true)) {
                    count++;
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
    std::cout << "The count of the numbers is: " << starts_one_ends(n) << std::endl;
    return 0;
}