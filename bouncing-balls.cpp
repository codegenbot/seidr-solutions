#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    return (bouncinessIndex * (pow((1 - bouncinessIndex), numBounces - 1) + 1)) * startingHeight;
}