#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    cout.precision(5);
    cout << fixed << totalDistance;

    return 0;
}