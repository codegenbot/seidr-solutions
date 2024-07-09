#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight * pow(bouncinessIndex, i));
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << bouncinessIndex << "\n";
    std::cout << totalDistance << "\n";

    return 0;
}