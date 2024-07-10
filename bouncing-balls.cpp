```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= pow(2, -bouncinessIndex);
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;

    return 0;
}