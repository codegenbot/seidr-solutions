#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);

    cout << fixed << setprecision(4) << bouncinessIndex << endl;
    cout << fixed << setprecision(10) << calculateTotalDistance(bouncinessIndex, numBounces) << endl;

    return 0;
}