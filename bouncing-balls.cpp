#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance that the ball travels across those bounces
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * (1 - pow(0.5, i)));
    }

    cout.precision(4); // set precision to 4 decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}