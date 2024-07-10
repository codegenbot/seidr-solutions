#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    // Read input from user
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    // Calculate total distance travelled
    double totalDistance = (1 + pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, numBounces)) / (1 - pow(bouncinessIndex, 2));

    // Print output
    cout << fixed << setprecision(4) << totalDistance;

    return 0;
}