```cpp
#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<m; j++) {
            if(i > j) {
                p += 1.0;
            }
        }
    }

    return p / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides of Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides of Colin's die: ";
    std::cin >> m;

    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;

    return 0;
}