```cpp
#include <iostream>

double probability(int n, int m) {
    double total = static_cast<double>(n * m);
    double failureProbability = 0;
    for (int i = 1; i <= std::min(n - 1, m); i++) { 
        failureProbability += (m - i + 1) / total;
    }
    return 1 - failureProbability;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "The probability that Peter rolls strictly higher is: " << result << std::endl;
}