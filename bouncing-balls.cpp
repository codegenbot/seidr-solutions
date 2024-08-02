#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += bouncinessIndex * (2.0 * (startHeight - 0.5));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}