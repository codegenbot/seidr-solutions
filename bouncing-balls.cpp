#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = (1 - pow(bouncinessIndex, 2)) * 4 * numBounces * startHeight;

    cout << fixed << setprecision(6) << totalDistance;
    
    return 0;
}