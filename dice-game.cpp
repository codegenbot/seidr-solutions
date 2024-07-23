```c++
#include <iostream>

double probability(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum - (1.0 / m);
}

int main() {
    int n, m;
    std::cout << "Enter number of sides of Peter's die: ";
    std::cin >> n;
    std::cout << "Enter number of sides of Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}