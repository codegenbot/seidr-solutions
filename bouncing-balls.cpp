#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    // Read input from user
    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight * pow(bouncinessIndex, i));
    }

    // Print output
    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}