#include <iostream>
using namespace std;

int main() {
    double heightStart;
    double heightFirstBounce;
    int numBounces;
    
    cin >> heightStart >> heightFirstBounce >> numBounces;
    
    double bouncinessIndex = heightFirstBounce / heightStart;
    
    double totalDistance = (1 + bouncinessIndex) * (2.0 - 0.5 * pow(bouncinessIndex, 2.0)) * (numBounces + 1);
    
    cout.precision(4);
    cout << fixed << totalDistance;
    
    return 0;
}