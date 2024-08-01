#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounce) {
    return firstBounce / startHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2.0, -i * log2(bouncinessIndex));
    }
    return totalDistance;
}

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncy = bouncinessIndex(startHeight, firstBounce);
    double totalDis = totalDistance(bouncy, numBounces);

    cout << fixed << setprecision(5) << totalDis;

    return 0;
}