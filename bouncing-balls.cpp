#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - pow(bouncinessIndex, -1));

    cout << fixed << setprecision(4) << totalDistance;
}