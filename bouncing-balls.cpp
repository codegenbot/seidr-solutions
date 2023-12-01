#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = 0;

    for (int i = 0; i <= numBounces; i++) {
        totalDistance += 2 * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
    }

    return totalDistance - startingHeight;
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