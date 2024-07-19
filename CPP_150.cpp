#include <iostream>
#include <cmath>

int x_or_y(int n, int x, int y) {
    if (n < 2) return y;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return y;
    }
    return x;
}

int main() {
    int n, x, y;
    std::cin >> n >> x >> y;
    std::cout << x_or_y(n, x, y) << std::endl;
    return 0;
}