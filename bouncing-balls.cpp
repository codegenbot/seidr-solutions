#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (1 + bounciness) * startHeight;
        startHeight *= bounciness;
    }

    cout.setprecision(6);
    cout << fixed << totalDistance << endl;

    return 0;
}