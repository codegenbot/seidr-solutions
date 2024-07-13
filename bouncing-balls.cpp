#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    
    double totalDistance = 2.0; // initial distance is 2 units
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2.0, i * log2(bouncinessIndex));
    }
    
    cout << fixed << setprecision(6);
    cout << totalDistance << endl;
    
    return 0;
}