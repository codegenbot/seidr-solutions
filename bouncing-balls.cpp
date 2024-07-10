#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}