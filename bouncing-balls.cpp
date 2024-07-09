#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    totalDistance = startHeight * (1 - pow(bouncinessIndex, numBounces + 1)) / (1 - bouncinessIndex);

    cout << fixed << showpoint << setprecision(5) << totalDistance << endl;

    return 0;}