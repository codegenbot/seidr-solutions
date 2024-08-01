#include <iostream>
using namespace std;

double bouncingBalls(double startHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = 0.0;
    
    for (int i = 1; i <= numBounces; i++) {
        if (i == 1) {
            totalDistance += startHeight * 2.0; // the initial drop
        } else {
            totalDistance += (startHeight * bouncinessIndex) * 2.0;
            startHeight *= bouncinessIndex;
        }
    }
    
    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    cout << fixed << setprecision(5);
    cout << bouncingBalls(startHeight, firstBounceHeight, numBounces) << endl;

    return 0;
}