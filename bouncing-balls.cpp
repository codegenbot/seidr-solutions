#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startHeight * pow(2, -i)) * bouncinessIndex;
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}