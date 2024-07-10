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
        totalDistance += (2 * startingHeight * pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << totalDistance << endl;

    return 0;
}