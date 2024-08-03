#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        if(i == 1)
            totalDistance += (firstBounceHeight - startHeight);
        else
            totalDistance += (startHeight * pow(bouncinessIndex, i));
    }

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}