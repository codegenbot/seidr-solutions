#include <iostream>
#include <cmath>

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    // ... (your existing implementation)
}

int main() {
    std::cout << "Enter the starting height: ";
    double startingHeight;
    std::cin >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    double firstBounceHeight;
    std::cin >> firstBounceHeight;

    std::cout << "Enter the number of bounces: ";
    int numBounces;
    std::cin >> numBounces;

    double totalDistance = bouncingBalls(startingHeight, firstBounceHeight, numBounces);

    std::cout << "The total distance traveled by the ball is: " << totalDistance << std::endl;

    return 0;
}