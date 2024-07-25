#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance
    double totalDistance = (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(4) << totalDistance << endl;
    
    return 0;
}