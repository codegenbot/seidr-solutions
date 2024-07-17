#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounce) {
    return firstBounce / startHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) * 2.0 * numBounces;
}

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bIndex = bouncinessIndex(startHeight, firstBounce);
    double totalDist = totalDistance(bIndex, numBounces);

    cout.setprecision(6);
    cout << fixed;
    cout << totalDist << endl;

    return 0;
}