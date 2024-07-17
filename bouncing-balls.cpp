#include <iostream>
#include <cmath>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter first bounce height: ";
    std::cin >> firstBounceHeight;

    double calculatedBouncinessIndex = (firstBounceHeight > 0 ? firstBounceHeight / startingHeight : 0);

    for(int i = 1; i <= numBounces; ++i) {
        if(i == 1) {
            totalDistance += (startingHeight * pow(calculatedBouncinessIndex, 2*i));
        } else {
            totalDistance += (startingHeight * pow(calculatedBouncinessIndex, 2*i));
        }
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}