#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (1 - pow(bouncinessIndex, i)) * startHeight;
    }

    cout.precision(4);
    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}