#include <iostream>
#include <cmath>
using namespace std;
double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + bouncinessIndex * (1 - pow(bouncinessIndex, numBounces));
    return totalDistance;
}
int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    cout << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
    return 0;
}