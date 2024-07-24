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
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight * (2 ** i);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}