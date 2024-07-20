#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    cout << fixed << setprecision(5);
    cout << bouncinessIndex * (pow(2, numBounces + 1) - 1) << endl;
    
    return 0;
}