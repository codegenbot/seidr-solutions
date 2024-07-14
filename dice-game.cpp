```cpp
#include <iostream>
#include <cmath>

double diceGame(int n, int m) {
    double total = (n * m);
    double win = (n - m) * (n > m ? 1 : 0) + ((n == m) ? 0.5 : 0);
    return win / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input. Please enter a valid integer.\n";
        return 1; 
    }
    std::cout << "Enter the number of sides for Colin's die: ";
    if (!(std::cin >> m)) {
        std::cerr << "Invalid input. Please enter a valid integer.\n";
        return 1; 
    }
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}