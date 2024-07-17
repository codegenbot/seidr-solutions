#include <iostream>
#include <string>

std::string probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) { 
        sum += (n - m) / static_cast<double>(n * m);
    }
    return std::to_string(sum);
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = std::stod(probability(n, m));  
    std::cout << "The probability that Peter rolls strictly higher is: " << result << std::endl;
    return 0;
}