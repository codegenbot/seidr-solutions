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

    double actualBouncinessIndex = bouncinessIndex;

    double totalDistance = startHeight * ((pow(2, actualBouncinessIndex)) - 1) * (actualBouncinessIndex - 0.5);

    cout << fixed;
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}