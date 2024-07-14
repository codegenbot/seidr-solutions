#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    double bouncinessIndex = firstBounce / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (i * (1 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}