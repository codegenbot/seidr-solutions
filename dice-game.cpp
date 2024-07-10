#include <iostream>

double probability(int n, int m) {
    double total = (n + m);
    double peterWins = 0;
    
    for (int i = n; i <= m - 1; ++i) {
        peterWins += 1.0 / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(2) << probability(n, m) << std::endl;
    return 0;
}