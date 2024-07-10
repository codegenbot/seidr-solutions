#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bounciness) * (startHeight + (firstBounce - startHeight) * (1 - pow(2, -bounciness)) / (pow(2, -bounciness) - 1));
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}