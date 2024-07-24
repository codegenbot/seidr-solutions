#include <iostream>
#include <string>

int sum_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main() {
    std::cout << "Sum of squares is: " << sum_squares(221) << std::endl;
    return 0;
}