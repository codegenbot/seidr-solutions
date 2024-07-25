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
        double totalHeight = startingHeight * pow(2, -bouncinessIndex * (i-1));
        totalDistance += static_cast<double>(totalHeight);
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}