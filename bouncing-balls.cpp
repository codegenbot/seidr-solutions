#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        totalDistance += (startHeight * (2.0 - bounciness)) * (2.0 * i);
        startHeight *= bounciness;
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}