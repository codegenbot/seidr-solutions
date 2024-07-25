#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return (firstBounceHeight / startHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return ((1 + bouncinessIndex) * pow(bouncinessIndex, numBounces - 1) - 1) / (bouncinessIndex - 1);
}

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);

    cout.precision(3);  // Set the precision of the output
    cout << fixed;       // Use fixed notation for floating point numbers

    cout << calculateTotalDistance(bouncinessIndex, numBounces) << endl;

    return 0;
}