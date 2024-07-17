#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}