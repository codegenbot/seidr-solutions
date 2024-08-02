#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bounciness = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight * pow(bounciness, i));
    }

    cout << fixed << setprecision(5);
    cout << startHeight + totalDistance << endl;

    return 0;
}