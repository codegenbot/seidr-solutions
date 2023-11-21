#include <iostream>
#include <iomanip>

double probabilityOfPeterWinning(int n, int m) {
    return (n - 1.0) / (2.0 * (m + n - 2.0));
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(8) << probabilityOfPeterWinning(n, m) << std::endl;
    return 0;
}