#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -0.5) * startHeight * (1 + bouncinessIndex);
        startHeight *= bouncinessIndex;
    }

    // Print the result
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}