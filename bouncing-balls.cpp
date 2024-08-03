#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    cout << fixed << setprecision(5);
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * pow(bouncinessIndex, i));
    }

    cout << totalDistance << endl;

    return 0;
}