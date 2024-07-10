#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double heightAfterFirstBounce;
    cin >> heightAfterFirstBounce;
    
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = (1 - pow(bouncinessIndex, 2)) * (startingHeight + heightAfterFirstBounce) * numBounces;

    cout.precision(4);
    cout << fixed << totalDistance << endl;
    
    return 0;
}