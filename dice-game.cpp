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
        std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << std::endl;
        int m;
        std::cout << "Enter the number of sides on Colin's die: ";
        std::cin >> m;
        while (!(std::cin)) {
            std::cout << "Invalid input. Please enter a valid integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> m;
        }
    }
    return 0;
}