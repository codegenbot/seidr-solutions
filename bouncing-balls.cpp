#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += std::pow(2.0, -i) * startHeight;
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance + firstBounceHeight << endl;

    return 0;
}