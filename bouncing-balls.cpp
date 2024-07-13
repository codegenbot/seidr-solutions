```c++
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string input;
    double startHeight = stod(input);
    double bouncinessIndexInput = stod(input);
    double firstBounce = bouncinessIndexInput;
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