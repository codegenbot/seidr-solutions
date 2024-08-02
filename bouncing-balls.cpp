#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= 2.0 * (1.0 - bouncinessIndex);
    }

    cout << fixed << setprecision(6);
    cout << firstBounce / startHeight << endl;
    cout << totalDistance << endl;

    return 0;
}