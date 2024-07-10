#include <iostream>
#include <cmath>

int main() {
    double h0, h1, b;
    std::cin >> h0 >> h1 >> b;
    double bi = h1 / h0;
    double total_distance = h0 * (1 + bi) * (1 - std::pow(bi, b)) / (1 - bi);
    std::cout << total_distance << std::endl;
    return 0;
}