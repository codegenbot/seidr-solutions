#include <iostream>
double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        for (int j = 1; j <= m && j < i; j++) {
            total += 1.0/static_cast<double>(n*m);
        }
    }
    return total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides on Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides on Colin's die: ";
    std::cin >> m;
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}