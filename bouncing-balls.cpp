#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bounciness) * startHeight;
        startHeight *= 2 * (1 - pow(10, -bounciness));
    }

    cout << fixed << setprecision(4);
    cout << startHeight << endl;
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}