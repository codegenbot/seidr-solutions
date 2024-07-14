```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    cin >> startHeight >> firstBounce; 

    double bouncinessIndex = (double)firstBounce / startHeight;

    double height = startHeight; // initialize height
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    cout << "The total distance the ball travels is: " << totalDistance * bouncinessIndex << endl;

    return 0;
}