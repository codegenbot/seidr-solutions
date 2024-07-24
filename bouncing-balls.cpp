#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight * (2.0 - 1.0);
        startHeight *= bouncinessIndex;
    }

    cout.setprecision(6); // To handle precision issues
    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}