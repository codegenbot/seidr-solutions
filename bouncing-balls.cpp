#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2.0, -0.5 * i) * (startHeight + (firstBounce - startHeight) * pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(4);
    cout << firstBounce / startHeight << endl;
    cout << totalDistance << endl;

    return 0;
}