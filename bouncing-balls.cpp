#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startingHeight;

    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, (-2)));

    for(int i=1; i<numBounces; i++) {
        totalDistance += 0.5 * (1 - pow(bouncinessIndex, (-2*(i+1))));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance;

    return 0;
}