#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 0.0;

    for(int i=1; i<=numBounces; i++) {
        if(i == 1) {
            totalDistance += firstBounce;
        } else {
            totalDistance += startHeight * bouncinessIndex;
        }
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}