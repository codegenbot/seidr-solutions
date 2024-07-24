```c++
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
    int sum = sum_of_squares(100);
    std::cout << "The sum of squares is: " << std::to_string(sum) << std::endl;
    return 0;
}