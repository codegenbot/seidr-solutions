#include <iostream>
#include <string>

int sum_of_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main() {
    assert(sum_of_squares(2*2 + 3*3 + 17*17) == 385);
    std::cout << "Sum of squares: " << sum_of_squares(2*2 + 3*3 + 17*17) << std::endl;
    return 0;
}