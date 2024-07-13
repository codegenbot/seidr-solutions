#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double total_ways = n * m;
    double count_ways = 0.0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i && j <= m; j++) {
            count_ways += 1.0;
        }
    }

    double probability = count_ways / total_ways;
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;

    return 0;
}