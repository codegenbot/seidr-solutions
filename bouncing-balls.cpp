#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = (1 + bouncinessIndex) * (2 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex));

    cout.setprecision(6);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}