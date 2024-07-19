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
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (bouncinessIndex * startHeight) + startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(4);
    cout << startHeight << endl;

    return 0;
}