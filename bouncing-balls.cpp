#include <iostream>
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
    cout << bouncinessIndex * (1 + 2 + ... + (numBounces*2)) << endl;

    return 0;
}