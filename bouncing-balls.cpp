#include <iostream>

int main() {
    long double h0, h1, bouncinessIndex;
    int numBounces;

    std::cin >> h0 >> h1 >> numBounces;

    bouncinessIndex = static_cast<long double>(h1) / h0;

    long double totalDistance = h0 + h1;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += (1.0 + bouncinessIndex) * h1;
        h1 *= bouncinessIndex;
    }

    std::cout << totalDistance << '\n';

    return 0;
}