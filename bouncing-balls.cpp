#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;
    
    bouncinessIndex = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << bouncinessIndex << endl;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1 * log(bouncinessIndex) / log(2));
    }

    cout << fixed << totalDistance << endl;

    return 0;
}