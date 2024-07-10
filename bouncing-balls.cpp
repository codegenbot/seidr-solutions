#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        if (i == 1) {
            totalDistance += (firstBounceHeight - startingHeight);
        } else {
            totalDistance += (startingHeight * pow(bouncinessIndex, i)) - (startingHeight * pow(bouncinessIndex, i-1));
        }
    }

    cout.precision(6); // set the precision to 6 for accurate output
    cout << fixed << totalDistance << endl;

    return 0;
}