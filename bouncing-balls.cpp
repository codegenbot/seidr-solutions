#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight * (bouncinessIndex - 1)) + startingHeight;
        startingHeight *= bouncinessIndex;
    }

    cout.setprecision(5);
    cout << fixed << totalDistance;

    return 0;
}