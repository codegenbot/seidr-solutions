#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    // Calculate total distance that the ball travels across those bounces
    double totalDistance = 0;
    for(int i = 1; i <= numBounces; i++) {
        if(i == 1) {
            totalDistance += (heightAfterFirstBounce - startingHeight) * 2; // first bounce
        } else {
            totalDistance += (startingHeight / heightAfterFirstBounce) * 2; // subsequent bounces
            startingHeight = heightAfterFirstBounce;
            heightAfterFirstBounce /= bouncinessIndex;
        }
    }

    cout << fixed << setprecision(6);
    cout << heightAfterFirstBounce << endl;
    cout << totalDistance << endl;

    return 0;
}