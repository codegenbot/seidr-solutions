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
    double height = startHeight;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += height * 2;
        height *= bouncinessIndex;
    }

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}