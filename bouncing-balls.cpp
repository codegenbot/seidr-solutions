#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight;
    cin >> firstBounceHeight;
    cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}