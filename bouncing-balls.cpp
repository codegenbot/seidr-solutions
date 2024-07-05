#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    long double startHeight, firstBounce;

    cin >> startHeightStr >> firstBounceStr;
    startHeight = stold(startHeightStr);
    firstBounce = stld(firstBounceStr);

    int numBounces;
    cin >> numBounces;

    // Calculate bounciness index
    long double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    long double totalDistance = 0.0L;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}