
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex, totalDistance;
    int numOfBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numOfBounces;
    bouncinessIndex = heightAfterFirstBounce / startingHeight;
    totalDistance = 0.0;
    for (int i = 1; i <= numOfBounces; i++) {
        totalDistance += (startingHeight + (i * bouncinessIndex));
    }
    cout << fixed << setprecision(6) << totalDistance << endl;
    return 0;
}