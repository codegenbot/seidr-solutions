#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= (1 - bouncinessIndex);
        totalDistance += startHeight;
    }

    cout << fixed << setprecision(5) << showpoint << totalDistance << endl;

    return 0;
}