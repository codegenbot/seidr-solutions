#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double total_outcomes = n * m;
    double favorable_outcomes = (n * (m - 1) + m) / (2.0 * n * m);
    
    std::cout << std::fixed << std::setprecision(6) << favorable_outcomes << std::endl;
    
    return 0;
}