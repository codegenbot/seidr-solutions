#include <cmath>
#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < std::pow(10, n); j++) {
            int num = i * std::pow(10, n - 1) + j;
            if ((num / std::pow(10, n - 1)) % 10 == 1 || num % 10 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    int result = starts_one_ends(n);
    std::cout << "Result: " << result << "\n";
    return 0;
}