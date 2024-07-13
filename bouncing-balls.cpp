#include <iostream>
using namespace std;

double calculateBounciness(double heightStart, double heightFirstBounce) {
    return heightFirstBounce / heightStart;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(0.5, numBounces)) / (1 - 0.5) * bouncinessIndex;
}

int main() {
    double heightStart;
    double heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bounciness = calculateBounciness(heightStart, heightFirstBounce);
    double totalDistance = calculateTotalDistance(bounciness, numBounces);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}