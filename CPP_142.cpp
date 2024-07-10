```cpp
#include <cmath>
#include <iostream>
#include <cassert>

double sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

std::ios_base::sync_with_stdio(false);

int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
        std::cin.clear(); 
        while (std::cin.get() != '\n') 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

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