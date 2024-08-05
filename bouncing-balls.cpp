#include <iostream>
#include <cmath>

int main() {
    double h0, h1;
    int n;
    std::cin >> h0 >> h1 >> n;
    double bounciness = h1 / h0;
    double total_distance = h0 + h1;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * h1 * pow(bounciness, i);
    }
    std::cout << total_distance << std::endl;
    return 0;
}