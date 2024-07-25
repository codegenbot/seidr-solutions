#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;
    
    bouncinessIndex = firstBounce / startHeight;
    
    cout.precision(4); // Set the precision to 4 decimal places
    cout << fixed;
    cout << (bouncinessIndex * (1 + 2 + ... + 2)) << endl; // Calculate the total distance
    
    return 0;
}