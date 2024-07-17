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

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (2.0 * startHeight) * (1 - pow(bouncinessIndex, i));
    }

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}