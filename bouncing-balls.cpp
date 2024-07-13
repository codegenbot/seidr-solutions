#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, bouncinessIndexInput, numBounces;
    cout << "Enter start height: ";
    cin >> startHeight;

    cout << "Enter bounciness index: ";
    cin >> bouncinessIndexInput;

    cout << "Enter number of bounces: ";
    cin >> numBounces;

    double firstBounce = startHeight;
    double bouncinessIndex = bouncinessIndexInput / startHeight;

    double totalDistance = startHeight * (pow(2, bouncinessIndex) - 1);
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= bouncinessIndex;
    }

    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}