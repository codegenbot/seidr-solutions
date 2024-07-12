#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += std::pow(2, -1.0 * std::log2(bouncinessIndex)) * startHeight;
    }

    cout << fixed << setprecision(6);
    cout << totalDistance;

    return 0;
}