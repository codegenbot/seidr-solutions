#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Initialize total distance traveled
    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        // Calculate height after the bounce
        double currentHeight = startHeight * pow(bouncinessIndex, i);

        // Add to total distance traveled
        totalDistance += 2.0 * (startHeight - currentHeight);
    }

    cout << fixed << setprecision(4);
    cout << totalDistance;

    return 0;
}