#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startingHeight;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        totalDistance += 2 * (bounciness - pow(bounciness, 2));
    }

    cout.precision(4);
    cout << fixed << bounciness << endl;
    cout << fixed << totalDistance << endl;

    return 0;
}