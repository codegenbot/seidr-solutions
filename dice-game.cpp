```cpp
#include <iostream>
double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n - m; i++) {
        p += ((n - i) / (double)(n)) * ((m - 1) / (double)m);
    }

    return p;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    std::cout << "Probability that Peter rolls strictly higher than Colin: " << probability(n, m) << std::endl;
    return 0;
}