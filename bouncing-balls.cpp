#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = (double)firstBounce / startHeight;

    cout << fixed << setprecision(4) << bouncinessIndex << endl;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow((double)bouncinessIndex, i);
    }

    cout << fixed << setprecision(4) << totalDistance + startHeight << endl;

    return 0;
}