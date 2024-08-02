#include <iostream>
using namespace std;

double bouncinessIndex(double startHeight, double endHeight) {
    return endHeight / startHeight;
}

long long totalDistance(double bouncinessIndex, int numBounces) {
    long long distance = 0;
    for (int i = 1; i <= numBounces; i++) {
        distance += static_cast<long long>(bouncinessIndex * pow(2, i - 1));
    }
    return distance;
}

int main() {
    double startHeight, endHeight, bouncinessIndexValue;
    int numBounces;

    cin >> startHeight >> endHeight >> numBounces;
    
    bouncinessIndexValue = bouncinessIndex(startHeight, endHeight);
    cout << fixed << setprecision(4) << bouncinessIndexValue << endl;
    
    long long totalDistValue = totalDistance(bouncinessIndexValue, numBounces);
    cout << fixed << setprecision(9) << totalDistValue << endl;

    return 0;
}