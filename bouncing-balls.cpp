#include <iostream>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    int firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter first bounce height: ";
    std::cin >> firstBounceHeight;

    double bouncinessIndex = (double)firstBounceHeight / startingHeight;

    for(int i = 1; i <= numBounces; ++i) {
        int currentHeight = (int)startingHeight;
        for(int j = 0; j < i; ++j) {
            currentHeight /= bouncinessIndex;
        }
        totalDistance += 2 * (currentHeight - startingHeight);
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}