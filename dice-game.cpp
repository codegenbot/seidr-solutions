#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_possibilities = n * m;
    double higher_rolls = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                ++higher_rolls;
            }
        }
    }
    
    double probability = higher_rolls / total_possibilities;
    std::cout << probability << std::endl;

    return 0;
}