```cpp
#include <iostream>
#include <cmath>
#include <string>

double diceGame(int n, int m) {
    double total = (n * m);
    double win = (n - m) * (n > m ? 1 : 0) + ((n == m) ? 0.5 : 0);
    return win / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::string strN;
    std::cin >> strN;
    try {
        n = stoi(strN);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input for Peter's die.\n";
        return 1;
    }
    std::cout << "Enter the number of sides for Colin's die: ";
    std::string strM;
    std::cin >> strM;
    try {
        m = stoi(strM);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input for Colin's die.\n";
        return 1;
    }
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}