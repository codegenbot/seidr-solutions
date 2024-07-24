#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bounciness);
    }

    cout << fixed << setprecision(6);
    cout << startHeight + firstBounce * bounciness / (1 - pow(2, -bounciness)) << endl;

    return 0;
}