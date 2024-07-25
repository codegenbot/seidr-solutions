#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << setprecision(4) << bouncinessIndex << endl;

    double totalDistance = 0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (bouncinessIndex - 1);
    }

    cout << fixed << setprecision(6) << startHeight * ((pow(bouncinessIndex, numBounces)) - 1) / (bouncinessIndex - 1) + totalDistance << endl;

    return 0;
}