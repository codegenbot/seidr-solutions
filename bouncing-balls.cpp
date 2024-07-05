#include <iostream>
#include <cstdio>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight; // initial drop

    double currentHeight = firstBounceHeight;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * currentHeight; // up and down
        currentHeight *= bouncinessIndex;
    }

    printf("%.15f\n", totalDistance);
    return 0;
}