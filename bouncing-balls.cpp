#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(2, -i) * startHeight * bouncinessIndex;
    }

    cout.precision(4);
    cout << fixed << totalDistance;

    return 0;
}