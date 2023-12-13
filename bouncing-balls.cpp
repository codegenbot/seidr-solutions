#include <iostream>

double calculateBouncinessIndex(int startingHeight, int firstBounceHeight);

double calculateTotalDistance(int startingHeight, int firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

double calculateBouncinessIndex(int startingHeight, int firstBounceHeight) {
    return static_cast<double>(firstBounceHeight) / static_cast<double>(startingHeight);
}

int main() {
    int startingHeight, firstBounceHeight, numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;
    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;
    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}