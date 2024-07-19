#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -0.5) * bouncinessIndex;
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}