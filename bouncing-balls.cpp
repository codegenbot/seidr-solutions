#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (bounciness * (2.0 - pow(bounciness, 2))) * startHeight;
        startHeight *= bounciness;
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}