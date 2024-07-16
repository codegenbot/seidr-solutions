#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Initialize total distance and current height
    double totalDistance = 0.0, currHeight = firstBounceHeight;

    for (int i = 1; i <= numBounces; ++i) {
        // Calculate new height after bounce
        currHeight *= bouncinessIndex;
        // Add the distance traveled in this bounce to total distance
        totalDistance += 2.0 * (startHeight - currHeight);
    }

    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}