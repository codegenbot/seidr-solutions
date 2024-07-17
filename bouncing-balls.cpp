#include <iostream>
#include <cmath>

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    double bouncinessIndex;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter the height after first bounce: ";
    std::cin >> heightAfterFirstBounce;

    bouncinessIndex = (heightAfterFirstBounce / startingHeight);

    numBounces = 0;
    while(numBounces < 1) {
        std::cout << "Enter the number of bounces: ";
        std::cin >> numBounces;
        if(numBounces > 0)
            break;
    }

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (pow(2, i/2.0) + pow(2, (i-1)/2.0)) * (bouncinessIndex - 1);
    }

    std::cout << "The total distance travelled by the ball is: " << totalDistance;

    return 0;
}