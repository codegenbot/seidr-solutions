#include <iostream>
using namespace std;

int main() {
    double startHeight;
    
    cin >> startHeight;
    
    int firstBounce = static_cast<int>(startHeight) / 2; 
    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        startHeight *= 0.5; 
        totalDistance += startHeight; 
    }

    cout << "The total distance the ball travels is: " << totalDistance * bouncinessIndex << endl;
    
    return 0;
}