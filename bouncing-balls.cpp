#include <iostream>

double calculateDistance(double startingHeight, double firstBounceHeight, int numberOfBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numberOfBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        bouncinessIndex = firstBounceHeight / startingHeight;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter height after first bounce: ";
    std::cin >> firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numberOfBounces;

    double distance = calculateDistance(startingHeight, firstBounceHeight, numberOfBounces);
    std::cout << "Total distance: " << distance << std::endl;

    return 0;
}