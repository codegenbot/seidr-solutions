```cpp
#include <iostream>

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if(i > m){
            sum += (n - i + 1) / (double)n * (m - i + 1) / (double)m;
        }
    }
    return sum;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}