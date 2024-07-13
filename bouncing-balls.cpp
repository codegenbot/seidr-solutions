```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;

    double firstBounce;
    cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces; 
    char c;
    cin >> numBounces >> c; 

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += abs(startHeight - firstBounce);
        startHeight *= bouncinessIndex; 
    }

    cout << fixed << setprecision(5) << totalDistance << "\n";
    return 0;
}