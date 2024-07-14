```cpp
#include <iostream>
#include <limits>

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            p += 1 / (double)(n * m);
        }
    }
    return p;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides on Peter's die: ";
    std::string n_str;
    std::cin >> std::ws >> n_str;
    n = std::stoi(n_str);
    while (!std::cin) {
        std::cerr << "Invalid input. Please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter the number of sides on Peter's die: ";
        std::cin >> std::ws >> n_str;
        n = std::stoi(n_str);
    }
    std::cout << "Enter the number of sides on Colin's die: ";
    std::string m_str;
    std::cin >> std::ws >> m_str;
    m = std::stoi(m_str);
    while (!std::cin) {
        std::cerr << "Invalid input. Please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter the number of sides on Colin's die: ";
        std::cin >> std::ws >> m_str;
        m = std::stoi(m_str);
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << std::endl;
    return 0;
}