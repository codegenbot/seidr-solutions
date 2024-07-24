#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (numBounces + 1);
}

int main() {
    int numBounces;
    cin >> numBounces;

    double startingHeight, heightAfterFirstBounce;
    cin >> startingHeight >> heightAfterFirstBounce;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout << fixed << setprecision(5) << calculateTotalDistance(numBounces, bouncinessIndex) << endl;

    return 0;
}