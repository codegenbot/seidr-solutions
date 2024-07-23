```c++
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
        double height = heightStart * pow(bouncinessIndex, 2 * i);
        totalDistance += height - heightStart;
    }

    cout << std::fixed;
    for (int i = 0; i < 6; ++i)
        cout << '0';
    cout << std::setprecision(6);
    cout << totalDistance;

    return 0;
}