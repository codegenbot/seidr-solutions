```cpp
#include <algorithm>
#include <iostream>

double diceGame(int n, int m) {
    double total = 1.0 * n * m / (m*n);
    double petersWin = 0.0;

    for (int i = 1; i <= std::min(m, n); i++) { 
        petersWin += (i+1) / (double)(n*m-i-1+i);
    }

    return petersWin;
}

int main() {
    int n = 6; // e.g., standard six-sided die
    int m = 6; // e.g., standard six-sided die

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher: " << result << std::endl;

    return 0;
}