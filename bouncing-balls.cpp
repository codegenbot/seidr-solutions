#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = (firstBounceHeight / startHeight);

    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, 2)) * startHeight * numBounces;

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}