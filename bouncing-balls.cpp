#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = (pow(bouncinessIndex, numBounces + 1) - 1) / (bouncinessIndex - 1);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}