```cpp
#include <iostream>
#include <string>

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            p += 1.0 / (n * m);
        }
    }
    return p;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides on Peter's die: ";
    if (!(std::cin >> n) || n <= 0) {
        while (!(std::cin)) {
            std::cerr << "Invalid input. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter the number of sides on Peter's die: ";
            if (!(std::cin >> n)) {
                break;
            }
        }
        if (n <= 0) {
            return 1; 
        }
    }
    std::cout << "Enter the number of sides on Colin's die: ";
    if (!(std::cin >> m) || m <= 0) {
        while (!(std::cin)) {
            std::cerr << "Invalid input. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter the number of sides on Colin's die: ";
            if (!(std::cin >> m)) {
                break;
            }
        }
        if (m <= 0) {
            return 1; 
        }
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << std::endl;
    return 0;
}