```cpp
#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)1 / total;
    } 
    return p;
}

int main() {
    int n, m;
    
    std::cout << "Enter value for number of sides (n): ";
    std::cin >> n;

    if(n < 2) {
        std::cout << "n must be at least 2. Please enter again.\n";
        std::cout << "Enter value for number of sides (n): ";
        std::cin >> n;
    }

    std::cout << "\nEnter value for number of sides (m): ";
    std::cin >> m;

    if(m < 2) {
        std::cout << "m must be at least 2. Please enter again.\n";
        std::cout << "Enter value for number of sides (m): ";
        std::cin >> m;
    }

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl; 
    std::cout << "The answer is: " << static_cast<int>(result * 100) << "%" << std::endl;

    return 0;
}