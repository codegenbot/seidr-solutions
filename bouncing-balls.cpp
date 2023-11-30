#include <iostream>
using namespace std;

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    cin >> startingHeight >> bounceHeight >> numBounces;

    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = 0.0;

    for (int i = 0; i <= numBounces; i++) {
        totalDistance += startingHeight + bounceHeight;
        startingHeight *= bouncinessIndex;
        bounceHeight *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}