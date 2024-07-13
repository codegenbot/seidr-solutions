```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout << "Enter start height: ";
    string input;
    cin >> input;
    double startHeight = stod(input);

    cout << "Enter bounciness index: ";
    input.clear();  // clear the previous input
    cin >> input;
    double bouncinessIndexInput = stod(input);
    double firstBounce = bouncinessIndexInput;

    cout << "Enter number of bounces: ";
    input.clear();
    cin >> input;
    int numBounces = stoi(input);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = firstBounce * pow(2, -bouncinessIndex);
        totalDistance += startHeight;
        firstBounce *= bouncinessIndex;
    }

    cout << fixed;
    cout.setf(ios_base::floatfield, ios_base::fixed);
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}