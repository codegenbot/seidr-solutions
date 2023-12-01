#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double prob = probability(n, m);
    
    std::cout << std::fixed << std::setprecision(2) << prob << std::endl;
    
    return 0;
}