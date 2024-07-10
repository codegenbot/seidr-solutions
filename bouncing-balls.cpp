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
        totalDistance += bouncinessIndex * (2.0 * (startHeight + (firstBounceHeight - startHeight) * pow(0.5, i)));
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}