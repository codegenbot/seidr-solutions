#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    // Read input from user
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }

    // Print output
    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << totalDistance << endl;

    return 0;
}