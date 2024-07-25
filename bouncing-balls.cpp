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
        totalDistance += pow(2, -bouncinessIndex) * startingHeight * (2 + 1);
        startingHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}