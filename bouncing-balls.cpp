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
    double totalHeight = firstBounceHeight;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += static_cast<double>(totalHeight);
        totalHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}