#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = (1.0 - (firstBounceHeight / startHeight));

    double totalDistance = 0.0;
    double currentHeight = firstBounceHeight; // Start from the first bounce height

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += currentHeight; // Add the current height to the total distance
        currentHeight *= bouncinessIndex + 1.0; // Update the current height for the next bounce
    }

    cout << fixed << setprecision(10);
    cout << bouncinessIndex << endl;
    cout << totalDistance + startHeight << endl; // Add the starting height back in

    return 0;
}