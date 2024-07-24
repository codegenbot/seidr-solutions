#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return 2.0 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);

    cout << fixed << setprecision(6) << bouncinessIndex << endl;
    cout << fixed << setprecision(10) << calculateTotalDistance(bouncinessIndex, numBounces) << endl;

    return 0;
}