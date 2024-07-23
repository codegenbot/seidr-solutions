```cpp
#include <iostream>
#include <cmath>

int main() {
    double heightStart, heightFirstBounce, bouncinessIndex;
    int numBounces;

    std::cin >> heightStart >> heightFirstBounce >> bouncinessIndex >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (heightFirstBounce - heightStart) * pow(bouncinessIndex, i-1);
    }

    std::cout << "The total distance is: " << totalDistance << std::endl;

    return 0;
}