```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    cin >> startHeight >> firstBounceHeight; 
    double bouncinessIndex = 2.0 * (firstBounceHeight / startHeight);
    
    int numBounces;
    cin >> numBounces;
    
    // calculate total distance based on bounciness index and numBounces
    double totalDistance = startHeight + firstBounceHeight + (bouncinessIndex - 1) * ((bouncinessIndex - 0.5) * startHeight / 2);
    cout << "Total Distance: " << totalDistance << endl;
    
    return 0;
}