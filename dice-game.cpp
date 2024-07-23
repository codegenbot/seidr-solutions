```cpp
#include <iostream>
#include <cmath>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= std::min(n, m); i++) {
        if(m - i > n) {
            p -= (i) / total;
        } else {
            p += (n - i) / total;
        }
    }

    p += ((double)(n - m)) / total;

    return p;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }
    std::cout << "Enter the number of sides for Colin's die: ";
    if (!(std::cin >> m)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << diceGame(n, m) << std::endl;
    return 0;
}