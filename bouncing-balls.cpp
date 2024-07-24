#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = (1 - pow(bouncinessIndex, -numBounces)) / (1 - pow(bouncinessIndex, -1));

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}