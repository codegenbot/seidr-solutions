#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * startHeight * bouncinessIndex;
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}