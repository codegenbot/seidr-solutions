#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if (i == 1 || i % 10 == 1) {
            --n;
            count += 1;
        }
        for (int j = 0; j < n - 1; ++j) {
            printf("%d", i);
            int k = 0;
            while (k < n - 1 && k++ < 10) {
                printf("0");
            }
            if (i == 1 || i % 10 == 1) {
                printf("1");
            } else {
                printf("9");
            }
            printf("\n");
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << std::endl;
    return 0;
}