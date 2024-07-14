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
    std::string prompt = "Enter the number of sides for Peter's die: ";
    std::cout << prompt << ": ";
    std::getline(std::cin, prompt);
    n = std::stoi(prompt);
    prompt = "Enter the number of sides for Colin's die: ";
    std::cout << prompt << ": ";
    std::getline(std::cin, prompt);
    m = std::stoi(prompt);
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}