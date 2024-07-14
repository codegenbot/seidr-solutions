```cpp
#include <iostream>
#include <limits>

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            p += 1 / (double)(n * m);
        }
    }
    return p;
}

int main() {
    int n, m;
    while (true) {
        std::cout << "Enter the number of sides on Peter's die: ";
        if (!(std::cin >> n)) break; 
        std::cout << "The number of sides on Peter's die is: " << n << "\n";
        std::cout << "Enter the number of sides on Colin's die: ";
        if (!(std::cin >> m)) break; 
        double result = probability(n, m);
        std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    }
    return 0;
}