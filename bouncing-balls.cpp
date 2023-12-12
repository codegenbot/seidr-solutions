#include <iostream>
using namespace std;
int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = (startingHeight + bouncinessIndex * numBounces) / 2;
    cout << totalDistance << endl;
    return 0;
}