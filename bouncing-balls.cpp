#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    int numBounces;
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (1 - pow(0.5, i)) * startHeight * bouncinessIndex;
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}