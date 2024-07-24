#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; ++i) {
        if(i == 1)
            totalDistance += (firstBounce - startHeight);
        else
            totalDistance += (bouncinessIndex * (startHeight - (startHeight * pow(bouncinessIndex, i-1))));
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}