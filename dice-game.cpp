#include <iostream>

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += std::min(i+1, n)*std::min(m-1, m-std::min(n-i,0))/static_cast<double>(n*m);
    }
    return total;
}

int main() {
    int n; // number of sides on Peter's die
    int m; // number of sides on Colin's die
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = diceGame(n, m);
    std::cout << "The probability is: " << result << std::endl;
    return 0;
}