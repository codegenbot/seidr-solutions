#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight + (startHeight * (bouncinessIndex - 1))) * 2.0;
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}