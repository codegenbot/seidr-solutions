#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * (2.0 - bouncinessIndex));
        startHeight *= bouncinessIndex;
    }

    cout.precision(5);
    cout << fixed << totalDistance << endl;

    return 0;
}