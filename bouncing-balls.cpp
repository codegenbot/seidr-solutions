#include <iostream>
#include <cmath>

int main() {
    double h1, h2;
    int n;
    std::cin >> h1 >> h2 >> n;
    double bounciness_index = h2 / h1;
    double total_distance = h1 + h2;

    for (int i = 2; i <= n; ++i) {
        total_distance += h2 * std::pow(bounciness_index, i);
    }

    std::cout << total_distance << std::endl;

    return 0;
}