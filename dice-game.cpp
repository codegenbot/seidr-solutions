#include <iostream>
#include <iomanip>
#include <numeric>

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return static_cast<double>(std::accumulate(std::begin(m+1), std::end(m+1), 0.0)/n);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
}