#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounce) {
    return firstBounce / startHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    double distance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        distance += bouncinessIndex * (2.0 - pow(2.0, (-1.0) * i));
    }
    return distance;
}

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = bouncinessIndex(startHeight, firstBounce);
    double totalDist = totalDistance(bounciness, numBounces);

    cout << fixed << setprecision(4) << totalDist << endl;

    return 0;
}