#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += std::pow(2, -bouncinessIndex) * (startHeight + (firstBounce - startHeight) * std::pow(2, -i));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;