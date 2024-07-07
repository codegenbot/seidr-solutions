```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double firstBounceHeight;
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight * (1 - pow(bouncinessIndex, i)));
    }
    
    cout.precision(5);
    cout << fixed << totalDistance << endl;
    
    return 0;
}