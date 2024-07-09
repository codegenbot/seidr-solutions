#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double totalDistance(int numBounces, double bouncinessIndex) {
    return pow(2, numBounces - 1.0) * (bouncinessIndex - 1) + 1;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounciness = bouncinessIndex(startHeight, firstBounceHeight);
    double distance = totalDistance(numBounces, bounciness);

    cout << fixed << setprecision(5) << distance << endl;

    return 0;
}