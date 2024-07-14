#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(4);
    double startHeight; 
    cin >> startHeight;
    
    double bouncinessHeight = startHeight * 0.5; // calculate height after first bounce
    double bouncinessIndex = bouncinessHeight / startHeight;

    if (bouncinessIndex < 0.01)
        cout << "The bounciness index is: " << 0.00 << endl;
    else
        cout << "The bounciness index is: " << bouncinessIndex << endl;
    
    double height = startHeight; 
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    cout << "The total distance the ball travels is: " << totalDistance * bouncinessIndex << endl;

    return 0;
}