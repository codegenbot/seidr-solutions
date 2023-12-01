#include <iostream>
#include <iomanip>

long double probability(int n, int m) {
    long double count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    return count / (n * m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(8) << probability(n, m) << std::endl;
    return 0;
}