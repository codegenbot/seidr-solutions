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
    std::cout << "Enter the number of sides on Peter's die: ";
    std::cin >> n;
    while (!(std::cin) || n <= 0) {
        std::cerr << "Invalid input. Please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter the number of sides on Peter's die: ";
        std::cin >> n;
    }
    std::cout << "Enter the number of sides on Colin's die: ";
    std::cin >> m;
    while (!(std::cin) || m <= 0) {
        std::cerr << "Invalid input. Please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter the number of sides on Colin's die: ";
        std::cin >> m;
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << std::endl;
    return 0;
}