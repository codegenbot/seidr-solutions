#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Enter start height: ";
    getline(cin, input);
    double startHeight = stod(input);

    cout << "Enter bounciness index: ";
    getline(cin, input);
    double bouncinessIndexInput = stod(input);

    cout << "Enter number of bounces: ";
    getline(cin, input);
    int numBounces = stoi(input);

    double firstBounce = startHeight;
    double bouncinessIndex = bouncinessIndexInput / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double startHeightTemp = startHeight * pow(2, -bouncinessIndex);
        totalDistance += startHeightTemp;
        firstBounce *= bouncinessIndex;
    }

    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}