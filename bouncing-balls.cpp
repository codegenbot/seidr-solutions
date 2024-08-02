#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}