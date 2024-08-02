#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * (1 - pow(1 - bounciness, i)));
    }

    cout.setprecision(5);
    cout << fixed << totalDistance << endl;

    return 0;
}