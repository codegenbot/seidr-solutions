```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string startHeightStr, firstBounceStr, numBouncesStr;
    double startHeight, firstBounce;

    cin >> startHeight >> firstBounce >> numBouncesStr;
    startHeight = stod(startHeightStr);
    firstBounce = stod(firstBounceStr);

    // Calculate bounciness index
    long double bouncinessIndex = static_cast<long double>(firstBounce) / static_cast<long double>(startHeight);

    // Calculate total distance traveled
    long double totalDistance = 0.0L;
    int numBounces = stoi(numBouncesStr);
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}