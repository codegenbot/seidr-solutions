#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight - (startHeight * bouncinessIndex)) * (2.0 * i);
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}