```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string startHeightStr, firstBounceStr, numBouncesStr;
    long double startHeight, firstBounce;

    cin >> startHeightStr >> firstBounceStr >> numBouncesStr;
    startHeight = stold(startHeightStr);
    firstBounce = stold(firstBounceStr);

    // Calculate bounciness index
    long double bouncinessIndex = static_cast<long double>(stold(firstBounceStr)) / static_cast<long double>(stold(startHeightStr));

    // Calculate total distance traveled
    long double totalDistance = 0.0L;
    for (int i = 1; i <= stoll(numBouncesStr); i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}