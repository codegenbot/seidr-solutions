#include <iostream>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double bouncinessIndex;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter first bounce height: ";
    std::cin >> bouncinessIndex;  

    double calculatedBouncinessIndex = (bouncinessIndex / startingHeight);

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startingHeight * calculatedBouncinessIndex - startingHeight);
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}