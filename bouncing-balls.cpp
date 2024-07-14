#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        if (i == 1) {
            totalDistance += startHeight + firstBounceHeight;
        } else {
            totalDistance += startHeight * bouncinessIndex * (2.0 / (i * i));
        }
    }

    cout.precision(4);
    cout << fixed << totalDistance;

    return 0;
}