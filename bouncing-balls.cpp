```cpp
#include <iostream>
using namespace std;

int main() {
    double initialHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> initialHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / initialHeight;
    
    totalDistance = (1 + bouncinessIndex) * (2 * numBounces);
    
    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}