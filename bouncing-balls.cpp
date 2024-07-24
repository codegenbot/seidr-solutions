#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startingHeight;

    // Calculate total distance
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startingHeight * (2.0 * (double)i - 1.0);
    }

    // Print result
    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}