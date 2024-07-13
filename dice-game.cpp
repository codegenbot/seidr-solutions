#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total = n * m;
    double count = 0;
    
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(i > j) {
                count++;
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(2) << count / total;

    return 0;
}