#include <iostream>
#include <string>

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
    while(true) {
        std::cout << "Enter the number of sides on Peter's die: ";
        if (!(std::cin >> std::ws).seekg(0, std::ios::beg) >> n) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            break;
        }
        std::cout << "Enter the number of sides on Colin's die: ";
        if (!(std::cin >> std::ws).seekg(0, std::ios::beg) >> m) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            break;
        }
        double result = probability(n, m);
        std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    }
    return 0;
}