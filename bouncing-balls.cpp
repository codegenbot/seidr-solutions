```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    int firstBounce = static_cast<int>(startHeight) / 2; 
    double bouncinessIndex = (double)firstBounce / startHeight;

    string strBI = to_string(bouncinessIndex);

    double height = startHeight; // initialize height
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    cout << "The bounciness index is: " << strBI << endl;
    
    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    string strTD = to_string(totalDistance * bouncinessIndex);
    cout << "The total distance the ball travels is: " << strTD << endl;

    return 0;
}