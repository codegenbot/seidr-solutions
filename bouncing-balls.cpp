#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    double bouncinessIndex = firstBounce / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, 2)) * startHeight * (1 + bouncinessIndex) * numBounces;

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}