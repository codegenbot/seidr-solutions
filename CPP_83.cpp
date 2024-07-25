#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (n > 1) {
            for (long long j = 1; j <= 9; j++) {
                if (j == 1 || j % 10 == 1)
                    count++;
                if (i != 1 && i % 10 != 1)
                    break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << std::endl;
    return 0;
}