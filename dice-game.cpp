#include <iostream>

double probabilityOfHigherRoll(int n, int m) {
    double total = n * m;
    double count = 0;
    
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
    
    std::cout << probabilityOfHigherRoll(n, m) << std::endl;
    
    return 0;
}