```cpp
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    double numBounces;

    getline(cin, startHeightStr);
    getline(cin, firstBounceStr);
    cin >> numBounces;

    double startHeight = stod(startHeightStr), firstBounce = stod(firstBounceStr);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed;
    cout << totalDistance << "\n";

    return 0;
}