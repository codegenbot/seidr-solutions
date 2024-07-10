#include <cmath>
#include <iostream>

int sum_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum_squares(n) << std::endl;
    return 0;
}