```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (heightFirstBounce - heightStart) * pow(bouncinessIndex, i-1);
    }

    cout << fixed << std::setf(ios_base::floatfield, ios_base::fixed) << totalDistance;

    return 0;
}