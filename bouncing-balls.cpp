```c
#include <iostream>
#include <cmath>

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    std::cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double height = heightStart * pow(bouncinessIndex, 2 * i);
        totalDistance += height - heightStart;
    }

    std::cout << fixed << setprecision(6);
    std::cout << totalDistance;

    return 0;
}