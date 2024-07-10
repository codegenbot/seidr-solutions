```cpp
#include <cmath>
#include <iostream>
#include <cassert>
#include <string>

double sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

int main() {
    std::string s;
    int n;
    while (!(std::cin >> std::ws >> s)) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
    }
    n = stoi(s);

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
    } else {
        double result = sum_squares(n);
        std::cout << "Sum of squares: " << result << std::endl;
        
        assert(sum_squares(1) == 1);
        assert(sum_squares(2) == 5);
        assert(sum_squares(3) == 14);
        return 0;
    }
}