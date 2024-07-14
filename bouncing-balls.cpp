#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (2.0 * startHeight * (1.0 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(5);
    cout << totalDistance;

    return 0;
}