#include <iostream>

double calcBounciness(double heightAfterFirstBounce) {
    double startingHeight = 1000.0; // assume this value if it's not provided by user
    return heightAfterFirstBounce / startingHeight;
}

int main() {
    double heightAfterFirstBounce, numBounces;

    std::cout << "Enter the starting height: ";
    cin >> heightAfterFirstBounce;

    std::cout << "Enter the height after first bounce: ";
    cin >> heightAfterFirstBounce;

    std::cout << "Enter number of bounces: ";
    cin >> numBounces;

    double bouncinessIndex = calcBounciness(heightAfterFirstBounce);

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -0.5) * heightAfterFirstBounce;
        heightAfterFirstBounce *= bouncinessIndex;
    }

    std::cout << "Total distance: " << totalDistance << "\n";

    return 0;
}