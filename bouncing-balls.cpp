#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance that the ball travels across those bounces
    double totalDistance = 0.5 * (startHeight + firstBounceHeight) * pow(bouncinessIndex, numBounces);

    cout << fixed << setprecision(6) << totalDistance;
    
    return 0;
}