#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1) * (startHeight + (firstBounceHeight - startHeight) * bouncinessIndex);
    }

    cout << fixed << std::setprecision(4) << totalDistance;

    return 0;
}