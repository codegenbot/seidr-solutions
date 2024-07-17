#include <iostream>

using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * pow(1 - bouncinessIndex, i));
    }

    cout.precision(6);
    cout << fixed << setprecision(6) << startHeight + totalDistance;

    return 0;
}