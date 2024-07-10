#include <iostream>
using namespace std;

double bouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double totalDistance(int numBounces, double bouncinessIndex) {
    return 2.0 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bounciness = bouncinessIndex(startingHeight, firstBounceHeight);

    cout << fixed << setprecision(4);
    cout << bounciness << endl;

    cout << fixed << setprecision(4);
    cout << totalDistance(numBounces, bounciness) << endl;

    return 0;
}