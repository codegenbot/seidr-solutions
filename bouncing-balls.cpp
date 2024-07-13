#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * startHeight) * pow(bouncinessIndex, i);
    }

    cout.precision(6); // Set the precision to 6 decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}