#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * bouncinessIndex - 1.0) * (i % 2 == 0 ? startHeight : firstBounceHeight);
    }

    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}