#include <iostream>
#include <cmath>
using namespace std;

double bouncingBall(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    return startingHeight + (numBounces - 1) * bouncinessIndex * (startingHeight + numBounces * bouncinessIndex);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    cout << bouncingBall(startingHeight, heightAfterFirstBounce, numBounces) << endl;
    return 0;
}