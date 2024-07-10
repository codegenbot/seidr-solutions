#include <vector>
#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(j <= m) {
                peterWins += 1.0;
            }
        }
    }

    return peterWins / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(4) << probability(n, m) << '\n';
    return 0;
}