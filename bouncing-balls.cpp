#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;
    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 1; i <= numberOfBounces; ++i) {
        totalDistance += 2 * startingHeight * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(6) << totalDistance << endl;
    return 0;
}