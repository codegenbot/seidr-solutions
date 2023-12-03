#include <iostream>

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double higherOutcomes = (n - 1) * m;
    return higherOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = probabilityOfHigherRoll(n, m);
    std::cout << probability << std::endl;
    return 0;
}