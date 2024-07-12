#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_outcomes = n * m;
    double count_higher = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                count_higher++;
            }
        }
    }
    
    std::cout << count_higher / total_outcomes << std::endl;
    
    return 0;
}