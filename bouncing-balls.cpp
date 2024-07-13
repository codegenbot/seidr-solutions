```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight;
    
    // Get the input values from user
    cin >> startHeight;
    
    double bouncinessIndex = (startHeight / startHeight);

    double totalDistance = 0.0; 
    int bounces = 8; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    cout << "The total distance the ball travels is: " << totalDistance << endl;
    
    return 0;
}