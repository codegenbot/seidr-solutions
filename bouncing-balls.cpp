#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 - pow(bounciness, -2)) * numBounces * startHeight;

    cout.precision(4);
    cout << fixed;
    cout << totalDistance + startHeight << endl;

    return 0;
}