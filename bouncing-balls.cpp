```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    if (startHeight <= 0 || heightAfterFirstBounce <= 0) {
        cout << "Error: Starting height or first bounce height should be positive." << endl;
    } else {
        double bouncinessIndex = heightAfterFirstBounce / startHeight;

        double distanceTravelled = 0.0; // initialize distance traveled
        for (int i = 1; i <= numBounces; ++i) {
            distanceTravelled += (startHeight * pow(2, 0.5)) * pow(0.5, i - bouncinessIndex);
        }

        cout << std::fixed << std::setprecision(10); 
        cout << distanceTravelled << endl;
        cout << std::defaultfloat; 
    }

    return 0;
}