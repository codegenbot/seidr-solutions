#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += (m - 1);  
        
        if (m < n) {
            favorable_outcomes += (n - m);  
        }
    }
    
    double probability = favorable_outcomes / static_cast<double>(total_outcomes);
    
    std::cout << probability << std::endl;
    
    return 0;
}