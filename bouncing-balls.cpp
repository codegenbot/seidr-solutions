#include <iostream>
#include <cmath>

long double calculateDistance(long double startingHeight, long double firstBounceHeight, int numBounces) {
    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * (totalDistance - startingHeight);
        bouncinessIndex = sqrt(bouncinessIndex);
    }

    return totalDistance;
}

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    long double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << distance << std::endl;

    return 0;
}