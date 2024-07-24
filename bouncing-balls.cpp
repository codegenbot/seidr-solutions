#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight * (1 - pow(1 - bouncinessIndex, i)));
    }

    cout << fixed << setprecision(4);
    cout << startHeight + totalDistance << endl;

    return 0;
}