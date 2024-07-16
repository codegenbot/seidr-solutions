#include <vector>
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= m; ++i) {
        // Calculate the number of ways Peter can roll a value greater than Colin
        int count = n - i;
        if (count > 0) {
            p += static_cast<double>(count) / (n * m);
        }
    }
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(4) << probability(n, m) << std::endl;
    return 0;
}