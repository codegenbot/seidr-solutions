#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    int numBounces;

    cin >> startHeight >> numBounces;  

    double totalDistance = 0.0;
    double height = startHeight;
    for (int i = 1; i <= numBounces; ++i) {
        double bouncinessIndex = (height - startHeight) / startHeight;
        height *= (bouncinessIndex + 1);
        totalDistance += (height - startHeight);
    }

    cout << fixed << setprecision(10);
    cout << static_cast<int>(totalDistance + 0.00001) << endl;

    return 0;
}