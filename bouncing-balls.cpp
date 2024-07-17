#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, i) * (bouncinessIndex - 1);
    }

    cout << fixed << setfill(' ') << showpoint << setiosflags(ios::fixed | ios::showpoint);
    cout << totalDistance << endl;

    return 0;
}