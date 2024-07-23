#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;
    
    streamsize prec;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double height = heightStart * pow(bouncinessIndex, 2 * i);
        totalDistance += height - heightStart;
    }

    prec = 6; 
    cout << fixed << setprecision(prec) << totalDistance;

    return 0;
}