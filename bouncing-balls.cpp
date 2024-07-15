#include <iostream>
using namespace std;

int main() {
    double h1, h2;
    cout << "Enter the starting height: ";
    cin >> h1;
    cout << "Enter the height after the first bounce: ";
    cin >> h2;
    
    double bouncinessIndex = h2 / h1;
    int numBounces;
    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    double totalDistance = (bouncinessIndex + 1) * (2.0 * (h1 + h2)) / (1 - pow(bouncinessIndex, 2));
    
    cout << std::fixed << std::setprecision(5) << totalDistance << endl;
    return 0;
}