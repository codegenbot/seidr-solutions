```c++
#include <iostream>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight;
    std::cin >> startingHeight >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    int numBounces;
    std::cin >> numBounces;

    double totalDistance = 0;
    for(int i=1; i<=numBounces*2; i+=2) {
        totalDistance += i;
    }
    totalDistance *= bouncinessIndex;

    std::cout << std::fixed << std::setprecision(6) << "The total distance traveled by the ball is: " << totalDistance << std::endl;
    return 0;
}