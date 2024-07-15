#include <iostream>
#include <cmath>
#include <limits>

int main() {
    double startHeight;
    int numBounces;

    cin >> startHeight >> numBounces;

    double firstBounce = 0.8 * startHeight; 

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}