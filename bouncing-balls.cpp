#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bounciness = firstBounce / startHeight;

    // Calculate total distance
    double totalDistance = 2.0 * (1 - pow(bounciness, -numBounces)) / (1 - bounciness);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}