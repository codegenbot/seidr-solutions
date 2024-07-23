#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    int numBounces;
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.5 * (startHeight + firstBounce);
    for(int i = 1; i < numBounces; i++) {
        totalDistance += 0.5 * ((2.0 * firstBounce) / (i+1));
    }

    cout << fixed << setprecision(4) << bouncinessIndex << endl;
    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}