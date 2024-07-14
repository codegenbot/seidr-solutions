#include <iostream>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    double firstBounce = startHeight / 2.0; 
    double bouncinessIndex = firstBounce / startHeight;

    double height = startHeight; // initialize height
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    cout << "The bounciness index is: " << bouncinessIndex << endl;
    
    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    cout << "The total distance the ball travels is: " << totalDistance * bouncinessIndex << endl;

    return 0;
}