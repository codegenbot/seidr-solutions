#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    return (bouncinessIndex * (pow((1 - bouncinessIndex), numBounces - 1) + 1)) * startingHeight;
}
int main() {
    // Example usage:
    double startingHeight = 10.0;
    double firstBounceHeight = 5.0;
    int numBounces = 3;
    cout << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
    return 0;
}
