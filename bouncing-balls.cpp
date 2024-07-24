#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) / (1 - bouncinessIndex) * numBounces * (startingHeight + heightAfterFirstBounce);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    cout << fixed << setprecision(6) << (1 - pow(bouncinessIndex, 2)) / (1 - bouncinessIndex) * numBounces * (startingHeight + heightAfterFirstBounce) << endl;

    return 0;
}