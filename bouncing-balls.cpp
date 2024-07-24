#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i=1; i<=numBounces; i++) {
        totalDistance += (2 * startHeight) * (1 - pow(bounciness, i));
    }

    cout.precision(5);
    cout << fixed << totalDistance << endl;

    return 0;
}