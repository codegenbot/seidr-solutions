#include <iostream>
using namespace std;

double bouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double totalDistance(int numBounces, double bouncinessIndex) {
    return 2.0 * (1.0 - pow(bouncinessIndex, numBounces)) / (1.0 - bouncinessIndex);
}

int main() {
    double heightAfterFirstBounce;
    int numBounces;

    // Read input from user
    cin >> heightAfterFirstBounce >> numBounces;

    // Calculate the bounciness index
    double bounciness = bouncinessIndex(heightAfterFirstBounce, 1.0);

    // Calculate and print the total distance that the ball travels across those bounces.
    cout << fixed << setprecision(4) << totalDistance(numBounces, bounciness) << endl;

    return 0;
}