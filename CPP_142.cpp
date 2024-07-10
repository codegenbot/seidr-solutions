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
    assert(sum_squares(n) == -1448); 
    std::cout << sum_squares(n) << std::endl;
    return 0;
}