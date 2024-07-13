#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (numBounces + 1);
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounciness = bouncinessIndex(startHeight, firstBounceHeight);

    cout << fixed << setprecision(4) << bounciness << endl;
    cout << fixed << setprecision(10) << totalDistance(bounciness, numBounces) << endl;

    return 0;
}