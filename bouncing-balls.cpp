#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    return startingHeight + (2 * firstBounceHeight * bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces-1)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << std::endl;

    return 0;
}