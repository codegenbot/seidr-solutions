#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string temp;
    cin >> temp;
    double startHeight = stod(temp);
    temp.clear();
    cin >> temp;
    double firstBounce = stod(temp);
    numBounces = stoi(temp);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double newHeight = startHeight * (1 - bouncinessIndex);
        totalDistance += abs(newHeight - startHeight); 
        startHeight = newHeight; 
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}