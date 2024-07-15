#include <iostream>
using namespace std;

int main() {
    double heightStart, heightEnd;
    
    cout << "Enter starting height of the ball: ";
    cin >> heightStart;
    
    cout << "Enter height after the first bounce of the ball: ";
    cin >> heightEnd;
    
    double bouncinessIndex = heightEnd / heightStart;

    int numBounces;
    
    cout << "Enter number of bounces: ";
    cin >> numBounces;
    
    double totalDistance = 0.5 * (1 + pow(2, 2/3.)) * pow(bouncinessIndex, 3/2.) * (numBounces * (numBounces + 1));
    
    cout << std::fixed << std::setprecision(5) << totalDistance << endl;
    return 0;
}