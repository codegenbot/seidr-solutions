#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    if (startHeight == 0 || firstBounce > startHeight) {
        cout << "Invalid input";
        return -1;
    }

    bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += pow(2, bounciness) * (startHeight + firstBounce - 1);
    }

    cout << fixed << setprecision(5) << totalDistance;

    return 0;
}