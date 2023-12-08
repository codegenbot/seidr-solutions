```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
        totalDistance -= firstBounceHeight;
    }
    
    cout << fixed << setprecision(15) << totalDistance << endl;
    
    return 0;
}
```