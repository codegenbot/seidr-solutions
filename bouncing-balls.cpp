#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance
    double totalDistance = (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    // Print result
    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}