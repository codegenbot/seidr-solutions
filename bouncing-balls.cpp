#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, 2)) * numBounces * startHeight;
    
    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}