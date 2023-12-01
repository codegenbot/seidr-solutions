#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight; // include the initial drop

    for (int i = 1; i <= numBounces; i++) {
        double bounceHeight = firstBounceHeight * bouncinessIndex;
        totalDistance += 2 * bounceHeight;
        firstBounceHeight = bounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight, numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;
    std::cout << "Enter height after first bounce: ";
    std::cin >> firstBounceHeight;
    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    double result = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << "Total distance traveled: " << result << std::endl;

    return 0;
}