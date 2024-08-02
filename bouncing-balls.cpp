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
        totalDistance += pow(2, -bouncinessIndex) * (startHeight + (firstBounceHeight - startHeight) * (1 - pow(2, -i)));
    }

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}