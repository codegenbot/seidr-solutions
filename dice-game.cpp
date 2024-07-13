#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i < n; i++) {
        p += (double)i / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    for(int i = 1; i <= m; i++) {
        result += (double)(n - 1) / ((double)n * m) * ((double)i == 1 ? 0 : 1);
    }
    std::cout << "The probability is: " << result << std::endl;
    
    return 0;
}