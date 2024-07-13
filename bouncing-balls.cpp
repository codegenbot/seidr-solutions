#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}