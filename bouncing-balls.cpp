#include <iostream>

int main() {
    double startingHeight;
    double firstBounceHeight;

    std::cin >> startingHeight >> firstBounceHeight >> int bounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= bounces; i++) {
        totalDistance += (startingHeight + (firstBounceHeight - startingHeight) * pow(bouncinessIndex, i));
    }

    std::cout << fixed << setprecision(4);
    std::cout << totalDistance;

    return 0;
}