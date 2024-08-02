#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    if (startHeight == 0) {
        cout << "Please enter a non-zero starting height." << endl;
        return -1;
    }

    double bouncinessIndex = firstBounceHeight / startHeight;

    if (numBounces > 0) {
        double totalDistance = 2.0 * (startHeight + (startHeight * (bouncinessIndex - 1)) *
                ((1 + bouncinessIndex) * pow(bouncinessIndex, numBounces) - 1));
        cout << fixed << setprecision(6) << totalDistance;
    }

    return 0;
}