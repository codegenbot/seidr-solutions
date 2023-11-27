#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = startingHeight;
    double currentHeight = firstBounceHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight * 2;
        currentHeight *= currentHeight / startingHeight;
    }

    cout << totalDistance << endl;

    return 0;
}