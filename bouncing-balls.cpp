#include <iostream>
#include <cmath>

int main() {
    double h0, h1;
    int n;
    std::cin >> h0 >> h1 >> n;
    
    double bounciness = h1 / h0;
    double total_distance = h0 + h0 * (1 + bounciness) * (1 - std::pow(bounciness, n)) / (1 - bounciness);
    
    std::cout << total_distance << std::endl;
    
    return 0;
}