```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight;
    
    cin >> startHeight;
    
    double firstBounce = static_cast<double>(startHeight) / (static_cast<double>(startHeight) * 0.5);
    double bouncinessIndex = firstBounce;

    double totalDistance = 0.0; 
    int bounces = 8; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    cout << "The total distance the ball travels is: " << totalDistance << endl;
    
    return 0;
}