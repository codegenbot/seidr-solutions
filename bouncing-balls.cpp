#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * startingHeight * (2.0 + 1.0);
        startingHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}