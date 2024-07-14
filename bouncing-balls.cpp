```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    int firstBounce = static_cast<int>(startHeight) / 2; 
    double bouncinessIndex = (double)firstBounce / startHeight;

    cout << "The bounciness index is: " << to_string(bouncinessIndex) << endl;
    
    double height = startHeight; 
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    cout << "The total distance the ball travels is: " << to_string(totalDistance * bouncinessIndex) << endl;

    return 0;
}