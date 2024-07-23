```cpp
#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0; // Count of cases when Peter rolls strictly higher than Colin
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) { 
            higher++;
        }
    }
    return higher / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;

}