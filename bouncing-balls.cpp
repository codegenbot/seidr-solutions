```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight, actualStartHeight;
    
    string startHeightStr = to_string(startHeight);
    string actualStartHeightStr = to_string(actualStartHeight);
    cout << "Enter the starting height and first bounce height: " << startHeightStr << ", " << actualStartHeightStr << endl;

    cin >> startHeight >> actualStartHeight;
    
    double actualBouncinessIndex = (actualStartHeight / startHeight);

    double totalDistance = 0.0; 
    int bounces = 8; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    string totalDistanceStr = to_string(totalDistance);
    cout << "The total distance the ball travels is: " << totalDistanceStr << endl;
    
    return 0;
}