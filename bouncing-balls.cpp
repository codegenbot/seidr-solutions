#include <iostream>
using namespace std;

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double bouncinessIndex;

    cout << "Enter the number of bounces: ";
    cin >> numBounces;
    
    cout << "Enter the starting height: ";
    cin >> startingHeight;
    
    // calculate the first bounce
    double firstBounce = (startingHeight * 0.5); 
    bouncinessIndex = firstBounce / startingHeight;

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (2 * startingHeight * bouncinessIndex);
    }

    cout << "The total distance is: " << totalDistance << endl;
    
    return 0;
}