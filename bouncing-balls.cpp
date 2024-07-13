#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string input;
    double startHeight, bouncinessIndexInput, firstBounce, bouncinessIndex;
    int numBounces;
    
    cout << "Enter start height: ";
    getline(cin, input);
    startHeight = stod(input);

    cout << "Enter bounciness index: ";
    getline(cin, input);
    bouncinessIndexInput = stod(input);

    cout << "Enter number of bounces: ";
    getline(cin, input);
    numBounces = stoi(input);

    firstBounce = startHeight * bouncinessIndexInput;
    bouncinessIndex = pow(2, -log2(firstBounce / startHeight));

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double startHeightTemp = firstBounce * pow(2, -bouncinessIndex);
        totalDistance += startHeightTemp;
        firstBounce *= bouncinessIndex;
    }

    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}