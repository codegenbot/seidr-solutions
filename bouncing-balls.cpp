#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.5 * (startHeight + firstBounceHeight) * pow(bouncinessIndex, numBounces);

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}