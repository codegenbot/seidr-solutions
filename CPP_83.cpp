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
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Number of integers that start or end with 1 and are within the range from 1 to 10^n is: " << starts_one_ends(n) << std::endl;
    return 0;
}