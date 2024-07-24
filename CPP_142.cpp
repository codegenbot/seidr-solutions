#include <iostream>
#include <string>

int sum_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main2() {
    std::cout << "Sum of squares is: " << sum_squares(1*1 + 3*3 + 17*17 + 1*1 + 15*15 + 13*13 + 1*1 + 14*14 + 14*14 + 12*12 + 5*5) << std::endl;
    return 0;
}