```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int startHeight, firstBounce;
    cin >> startHeight >> firstBounce;

    double bouncinessIndex = (double)firstBounce / startHeight;

    int numBounces; 
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex; // move this line here
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    cout << fixed;
    cout << totalDistance << "\n";
    return 0;
}