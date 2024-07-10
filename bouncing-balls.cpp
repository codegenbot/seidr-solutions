#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = (1 - pow(bounciness, 2)) * (startHeight + firstBounce) / (1 - bounciness);

    for(int i=0; i<numBounces-1; i++){
        firstBounce *= bounciness;
        totalDistance += (1 - pow(bounciness, 2)) * (startHeight + firstBounce) / (1 - bounciness);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}