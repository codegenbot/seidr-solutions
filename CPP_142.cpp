#include <cmath>
#include <iostream>

int sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return static_cast<int>(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum_squares(n) << std::endl;
    
    assert(sum_squares(-1) + sum_squares(-3) + sum_squares(17) + 
           sum_squares(-1) + sum_squares(-15) + sum_squares(13) + 
           sum_squares(-1) + sum_squares(14) + sum_squares(-14) + 
           sum_squares(-12) + sum_squares(-5) + sum_squares(14) + 
           sum_squares(-14) + sum_squares(6) + sum_squares(13) + 
           sum_squares(11) + sum_squares(16) + sum_squares(16) + 
           sum_squares(4) + sum_squares(10) == -1448);
    
    return 0;
}