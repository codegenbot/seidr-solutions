#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 + pow(bounciness, 2));

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += 2.0 * (pow(bounciness, i));
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}