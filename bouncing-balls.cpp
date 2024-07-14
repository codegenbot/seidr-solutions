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

    double totalDistance = (1 + bouncinessIndex) * (2.0 / (1 - bouncinessIndex)) * (numBounces * 2);

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}