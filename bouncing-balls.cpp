#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    cin >> startHeight >> firstBounceHeight; 
    double bouncinessIndex = 2.0 * (firstBounceHeight / startHeight);
    
    int numBounces; 
    cin >> numBounces;
    
    // calculate total distance based on bounciness index and numBounces
    double totalDistance = startHeight * (1 + bouncinessIndex) * (1 - 0.5 * pow(bouncinessIndex, numBounces));
    
    cout << "The ball travels a total of " << totalDistance << " units." << endl;
    
    return 0;
}