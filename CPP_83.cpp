#include <iostream>

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 0; j < n - 1; j++) {
            int num = i * pow(10, j);
            if ((num / pow(10, n-1)) % 10 == 1 || (num % 10) == 1) {
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
    std::cout << "The count of numbers that start or end with 1 is: " << startsOneEnds(n) << std::endl;
    return 0;
}