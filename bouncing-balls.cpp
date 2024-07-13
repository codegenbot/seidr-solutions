#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * (startingHeight + (firstBounceHeight - startingHeight) * (1 - pow(2, -i)));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}