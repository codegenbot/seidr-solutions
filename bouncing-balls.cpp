#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return (firstBounceHeight / startingHeight);
}

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double firstBounceHeight;
    cin >> firstBounceHeight;

    int numBounces;
    cin >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);

    cout << fixed << setprecision(4);
    for (int i = 1; i <= numBounces; i++) {
        cout << startingHeight * pow(bouncinessIndex, i) << endl;
    }

    return 0;
}