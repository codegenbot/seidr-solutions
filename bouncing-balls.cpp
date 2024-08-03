#include <iostream>
using namespace std;

double bouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndexValue;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    bouncinessIndexValue = bouncinessIndex(heightAfterFirstBounce, startingHeight);

    cout << fixed << setprecision(6);
    cout << bouncinessIndexValue << endl;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndexValue, i);
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}