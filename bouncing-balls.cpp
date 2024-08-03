#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (1 + bouncinessIndex) * (numBounces * 2.0);
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    cout << fixed << setprecision(6);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(6);
    cout << calculateTotalDistance(numBounces, bouncinessIndex) << endl;

    return 0;
}