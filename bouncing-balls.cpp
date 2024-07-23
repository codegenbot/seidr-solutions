#include <iostream>
using namespace std;

double bouncingIndex(double startHeight, double firstBounce) {
    return firstBounce / startHeight;
}

double totalDistance(double bounciness, int numBounces) {
    return (1 + bounciness) * pow((2 + bounciness), numBounces - 1);
}

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = bouncingIndex(startHeight, firstBounce);

    cout.setprecision(6);
    cout << fixed << totalDistance(bounciness, numBounces) << endl;

    return 0;
}