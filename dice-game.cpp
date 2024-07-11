#include <iostream>
#include <iomanip>

double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
}

double probability(int n, int m) {