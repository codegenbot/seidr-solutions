#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        if(i == 1)
            totalDistance += (startHeight + firstBounce);
        else
            totalDistance += 2 * (1 - pow(1 - bouncinessIndex, i));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}