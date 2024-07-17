#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 + bouncinessIndex) * pow(2, numBounces);

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}