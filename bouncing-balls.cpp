#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = startHeight * (1 - pow(1 - bouncinessIndex, numBounces));

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}