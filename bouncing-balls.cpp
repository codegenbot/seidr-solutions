#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    if (startHeight == 0) {
        cout << "0.000" << endl;
        return 0;
    }

    bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(3) << totalDistance << endl;

    return 0;
}