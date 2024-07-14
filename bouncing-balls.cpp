#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = (1 - pow(bouncinessIndex, 2)) * (numBounces + 1) * (startHeight * (2 - bouncinessIndex));

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}