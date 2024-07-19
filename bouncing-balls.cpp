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
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }
    
    streamsize old_precision = cout.precision();
    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;
    cout.unsetf(ios_base::floatfield);
    cout.precision(old_precision);
    
    return 0;
}