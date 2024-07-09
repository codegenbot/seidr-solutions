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
        cout << fixed;
        cout << setprecision(5);
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight /= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}