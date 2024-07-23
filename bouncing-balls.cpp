```cpp
#include <iostream>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight;
    std::cin >> startingHeight >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    int numBounces;
    std::cin >> numBounces;

    double totalDistance = 0;
    for(int i = 1; i <= (2 * numBounces); ++i) {
        totalDistance += i;
    }
    totalDistance *= bouncinessIndex;

    std::cout << "The total distance traveled by the ball is: " << std::fixed << std::setprecision(6) << totalDistance << std::endl;
    return 0;
}