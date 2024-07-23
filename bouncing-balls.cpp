#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * (1 - pow(0.5, i)));
    }

    cout.precision(4);
    cout << fixed << bouncinessIndex << endl;
    cout << fixed << totalDistance << endl;

    return 0;
}