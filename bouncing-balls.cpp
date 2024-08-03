#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight * pow(2, -bouncinessIndex)) * (1 - pow(2, -bouncinessIndex));
        startHeight /= 2;
    }

    cout << fixed << setprecision(4);
    cout << startHeight + totalDistance << endl;

    return 0;
}