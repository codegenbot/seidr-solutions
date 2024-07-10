#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Peter's roll is equal to Colin's roll
    for (int i = 1; i <= std::min(n, m); i++) {
        p += (n-i)*(m-i)/total;
    }
    
    // Peter's roll is strictly higher than Colin's roll
    p += (m-1) / total;

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double output = probability(n, m);
    std::cout << std::fixed << std::setprecision(4) << output << std::endl;
    return 0;
}