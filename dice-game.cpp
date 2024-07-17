```cpp
#include <iostream>

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) { 
        sum += (n - i) / (double)(n * m);
    }
    return sum;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    if (result >= 0) {
        std::cout << "The probability that Peter rolls strictly higher is: " << std::to_string(result) << std::endl; 
    } else {
        // handle invalid result
    }
    return 0;
}