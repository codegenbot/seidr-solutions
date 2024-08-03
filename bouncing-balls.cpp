#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 + bounciness) * (1 - pow(bounciness, numBounces));

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}