```cpp
#include <iostream>
#include <stdexcept>

double probability(int n, int m) {
    double total = (double)n * m;
    if(total == 0)
        throw std::runtime_error("Error: The number of sides on the dice cannot be zero.");
    return (n - m + 1.0) / total; 
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    try {
        double result = probability(n, m);
        std::cout << "The probability is: " << result << std::endl;
    } catch (std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}