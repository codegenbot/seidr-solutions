```cpp
#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)1 / total;
    } 
    return p;
}

int main() {
    int n, m;
    std::cout << "Enter value of n: ";
    std::cin >> n;

    if(n < 2) {
        std::cout << "n must be at least 2. Please enter again.\n";
        std::cout << "Enter value of n: ";
        std::cin >> n;
    }

    std::cout << "\nEnter value of m: ";
    std::cin >> m;

    if(m < 2) {
        std::string errStr = (n < 2) ? "n" : "m";
        std::cout << errStr << " must be at least 2. Please enter again.\n";
        std::cout << "Enter value of " << errStr << ": ";
        std::cin >> m;
    }

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl; 

    return 0;
}