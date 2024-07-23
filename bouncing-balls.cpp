#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex, numBounces;
    cin >> startHeight >> firstBounce >> bouncinessIndex >> numBounces;

    double totalDistance = 2 * abs(startHeight);
    for (int i = 1; i <= numBounces; ++i) {
        if(i > 1)
            startHeight = abs(startHeight * bouncinessIndex);
        else
            startHeight = firstBounce;
        totalDistance += 2 * abs(startHeight); 
    }
    
    cout << fixed << setprecision(6) << totalDistance << endl;
}