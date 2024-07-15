#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    double startHeight;
    int numBounces;

    cin >> startHeight >> numBounces;

    double bouncinessIndex = 0.8; 

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    cout << setprecision(12) << totalDistance << endl;

    return 0;
}