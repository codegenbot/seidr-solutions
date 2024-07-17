#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        if (i == 1) {
            totalDistance += firstBounceHeight * 2.0; // add distance of first bounce
        } else {
            totalDistance += startingHeight * 2.0 * pow(bouncinessIndex, i); // add distance for subsequent bounces
        }
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}