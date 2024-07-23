```cpp
#include <iostream>
#include <string>

double probability(int n, int m) {
    double total = 1.0 * n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }

    int same = (n <= m) ? n : m;

    return (double)same / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability: " << std::to_string(result) << std::endl;
    return 0;
}