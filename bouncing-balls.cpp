#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    double bouncinessIndex = firstBounce / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    cout << fixed << setprecision(5);
    cout << (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex) << endl;
    
    return 0;
}