#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double count = 0;
    double total = n * m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    
    return count / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
    
    return 0;
}