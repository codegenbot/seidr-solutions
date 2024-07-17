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
    for (int i = 1; i <= numBounces; ++i) {
        double currentHeight = firstBounceHeight * pow(bouncinessIndex, i);
        totalDistance += 2 * (startingHeight + currentHeight);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}