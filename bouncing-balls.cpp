#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bounciness) * (startHeight * (1 + pow(2, bounciness)));
    }

    cout.precision(6);
    cout << fixed << totalDistance;

    return 0;
}