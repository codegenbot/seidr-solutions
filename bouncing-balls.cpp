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
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * (1 - pow(bouncinessIndex, i)) / (1 - bouncinessIndex);
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}