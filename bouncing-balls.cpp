#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 - pow(bounciness, 2)) * (startHeight + firstBounce) * numBounces;

    cout.precision(6); // for precise output
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}