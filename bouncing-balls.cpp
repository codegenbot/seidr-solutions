#include <iostream>

int main() {
    double startHeight;
    cin >> startHeight;

    double firstBounce;
    cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}