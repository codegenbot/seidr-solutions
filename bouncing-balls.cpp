#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance that the ball travels
    double totalDistance = 0.5 * (startHeight + firstBounce) * pow(2, numBounces);

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}