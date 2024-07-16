```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - m + 1.0) / total; 
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    double result = probability(n, m);
    std::cout << "The probability is: " << std::setprecision(17) << result << std::endl;
    return 0;
}