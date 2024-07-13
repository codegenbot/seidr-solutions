#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = (1 + pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    cout.precision(5);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}