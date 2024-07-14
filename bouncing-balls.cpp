#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * (2.0 - bouncinessIndex));
        startHeight *= (2.0 - bouncinessIndex);
    }

    cout << fixed << setprecision(4) << totalDistance;
    
    return 0;
}