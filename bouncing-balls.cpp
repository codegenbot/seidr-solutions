#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (2.0 * startHeight * (1.0 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << totalDistance << endl;

    return 0;
}