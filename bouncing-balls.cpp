```cpp
#include <iostream>
#include <cmath>

int main() {
    int numBounces;
    double heightStart, heightFirstBounce, bouncinessIndex;

    std::cin >> numBounces >> heightStart >> heightFirstBounce >> bouncinessIndex;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (heightFirstBounce - heightStart) * pow(bouncinessIndex, i-1);
    }

    std::cout << "The total distance traveled is: " << totalDistance << std::endl;

    return 0;
}