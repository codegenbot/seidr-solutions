#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double endHeight) {
    return endHeight / startHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (numBounces + 1);
}

int main() {
    double startHeight, endHeight;
    int numBounces;

    cin >> startHeight >> endHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, endHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}