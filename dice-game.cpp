```cpp
#include <iostream>
#include <limits>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)(n - i) / total;
    } 
    return p;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.rdbuf();

    int n, m;
    std::cout << "Enter value of n: ";
    if (!(std::cin >> n)) {
        std::cout << "Invalid input for n. Please enter a number." << std::endl;
        std::cout << "Enter value of n: ";
        std::cin >> n;
    }

    if(n < 2) {
        std::cout << "n must be at least 2. Please enter again." << std::endl;
        std::cout << "Enter value of n: ";
        std::cin >> n;
    }

    std::cout << "Enter value of m: ";
    if (!(std::cin >> m)) {
        std::cout << "Invalid input for m. Please enter a number." << std::endl;
        std::cout << "Enter value of m: ";
        std::cin >> m;
    }

    if(m < 2) {
        std::cout << "m must be at least 2. Please enter again." << std::endl;
        std::cout << "Enter value of m: ";
        std::cin >> m;
    }

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl; 

    return 0;
}