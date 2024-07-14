#include <iostream>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i) * startHeight;
    }

    std::cout << fixed << setprecision(5);
    std::cout << totalDistance << std::endl;

    return 0;
}