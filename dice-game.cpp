```cpp
#include <iostream>
#include <string>

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
    std::string str_n, str_m;
    while (true) {
        std::cout << "Enter the number of sides on Peter's die: ";
        std::cin >> str_n;
        if (!str_n.length()) break; 
        n = stoi(str_n);
        std::cout << "Enter the number of sides on Colin's die: ";
        std::cin >> str_m;
        if (!str_m.length()) break; 
        m = stoi(str_m);
        double result = probability(n, m);
        std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
        break;
    }
    return 0;
}