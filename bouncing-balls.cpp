#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.5 * (1 + bouncinessIndex);
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i) * 2;
    }

    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}