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

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * startHeight;
    }

    cout << fixed << std::setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance + firstBounceHeight << endl;

    return 0;
}