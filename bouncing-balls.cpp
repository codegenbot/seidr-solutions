#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return (firstBounceHeight / startHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return ((1 + bouncinessIndex) * (pow(bouncinessIndex, numBounces)) - 1) / (bouncinessIndex - 1);
}

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);

    cout << fixed << setprecision(4) << (bouncinessIndex * 2.0) << endl; // Calculate and print the total distance

    return 0;
}