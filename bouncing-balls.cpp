```cpp
#include <iostream>
#include <iomanip>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += height;
        height *= bouncinessIndex;
        totalDistance += height;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    // Calculate bouncinessIndex and round to 15 significant figures
    double bouncinessIndex = round(firstBounceHeight * 1000000000000000.0) / (startingHeight * 1000000000000000.0);
    double distance = calculateDistance(startingHeight, bouncinessIndex, numBounces);
    
    cout << fixed << setprecision(15) << distance << endl;
    
    return 0;
}
```