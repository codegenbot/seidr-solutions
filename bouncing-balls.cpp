```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    int firstBounce = static_cast<int>(startHeight) / 2; 
    double bouncinessIndex = (double)firstBounce / startHeight;

    if (bouncinessIndex < 0.01)
        cout << "The bounciness index is: 0.00" << endl;
    else
        cout << "The bounciness index is: " << fixed << setprecision(2) << bouncinessIndex << endl;
    
    double height = startHeight; 
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    if (totalDistance * bouncinessIndex < 0.01)
        cout << "The total distance the ball travels is: 0.00" << endl;
    else
        cout << "The total distance the ball travels is: " << fixed << setprecision(2) << totalDistance * bouncinessIndex << endl;

    return 0;
}