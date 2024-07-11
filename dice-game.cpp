```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total_outcomes = n * m;
    double not_happening = 0.0;
    for (int i = 1; i < m; ++i)
        not_happening += 1.0 / n + 1.0 / m;
    return 1.0 - not_happening / total_outcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
}