#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    #include <cmath>
    return (1 - pow(bouncinessIndex, 2)) / (1 - bouncinessIndex) * numBounces;
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    #include <iomanip>
    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}