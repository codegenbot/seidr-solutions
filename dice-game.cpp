#include <iostream>
double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << << probability(n, m) << std::endl;
}

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return (m + 1.0) / n;
}