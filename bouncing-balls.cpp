```cpp
#include <cmath>
#include <iostream> 
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = firstBounce / startHeight;

    double newHeight = firstBounce;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        if(i > 1)
            startHeight = abs(startHeight * bouncinessIndex);
        else
            startHeight = firstBounce;
        totalDistance += abs(startHeight - newHeight); 
        newHeight = startHeight;
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}