```
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight = 0, firstBounce = 0;
    int numBounces = 0;

    while (!(cin >> startHeight >> firstBounce >> numBounces)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again.\n";
    }

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, i) * bouncinessIndex + 1;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}