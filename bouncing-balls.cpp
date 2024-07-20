#include <iostream>
using namespace std;

double calculateBounciness(double initialHeight, double bounceHeight) {
    return bounceHeight / initialHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) / ((1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)));
}

int main() {
    double initialHeight, bounceHeight;
    int numBounces;

    cin >> initialHeight >> bounceHeight >> numBounces;

    double bounciness = calculateBounciness(initialHeight, bounceHeight);
    double distance = calculateTotalDistance(bounciness, numBounces);

    cout << fixed << setprecision(6) << distance;

    return 0;
}