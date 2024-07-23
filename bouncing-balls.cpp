#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    double distance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        distance += pow(bouncinessIndex, i);
    }
    return distance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounciness = bouncinessIndex(startHeight, firstBounceHeight);

    cout.setprecision(6);
    cout << fixed << setprecision(6) << totalDistance(bounciness, numBounces) << endl;

    return 0;
}