#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i=1; i<=numBounces; ++i) {
        if(i == 1)
            totalDistance += (2 * startHeight * (1 - pow(bouncinessIndex, i)));
        else
            totalDistance += (2 * startHeight * (1 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(5) << totalDistance;

    return 0;
}