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

    cout << "Enter first bounce height / start height: ";
    getline(cin, input);
    double bouncinessIndex = stod(input);

    cout << "Enter number of bounces: ";
    getline(cin, input);
    int numBounces = stoi(input);

    double totalDistance = 0;
    double prevHeight = startHeight;

    for (int i = 1; i <= numBounces; ++i) {
        double heightAfterBounce = (prevHeight * bouncinessIndex);
        totalDistance += abs(prevHeight - heightAfterBounce); // Add distance traveled in this bounce
        prevHeight = heightAfterBounce;
    }

    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}