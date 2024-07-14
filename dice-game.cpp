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
    std::string input;
    std::getline(std::cin, input);
    n = std::stoi(input);
    std::cout << "Enter the number of sides for Colin's die: ";
    std::getline(std::cin, input);
    m = std::stoi(input);
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}