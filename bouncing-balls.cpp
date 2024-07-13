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
    
    cout << fixed << setprecision(4);
    cout << (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex) << endl;

    return 0;
}