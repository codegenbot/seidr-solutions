#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bounciness = firstBounce / startHeight;

    // Calculate total distance
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(bounciness, i);
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}