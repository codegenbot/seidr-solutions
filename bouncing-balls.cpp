```cpp
#include <iostream>
using namespace std;

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double bouncinessIndex;

    cout << "Enter the number of bounces: ";
    cin >> numBounces;
    
    cout << "Enter the starting height: ";
    cin >> startingHeight;

    // calculate the first bounce
    for(int i = 0; i < numBounces; ++i) {
        double firstBounce = startingHeight; 
        bouncinessIndex = firstBounce / startingHeight;
        
        while(firstBounce > 1.0) {
            totalDistance += (2 * startingHeight);
            firstBounce /= 2.0;
            bouncinessIndex = firstBounce / startingHeight;
        }
    }

    cout << "The total distance is: " << totalDistance << endl;
    
    return 0;
}