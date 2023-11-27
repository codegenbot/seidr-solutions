#include <iostream>
using namespace std;

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    cin >> startingHeight >> bounceHeight >> numBounces;

    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = 0;
    double currentHeight = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }

    cout << totalDistance << endl;

    return 0;
}