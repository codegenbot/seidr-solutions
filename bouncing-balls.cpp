#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    bounciness = firstBounce / startHeight;

    // Calculate total distance
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bounciness, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}