```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    double bouncinessIndex = startHeight / 2.0;

    if (bouncinessIndex < 0.01)
        cout << "The bounciness index is: 0.00" << endl;
    else
        cout << "The bounciness index is: " << setprecision(2) << fixed << bouncinessIndex << endl;
    
    double height = startHeight; 
    double totalDistance = 0.0; 
    int bounces; 

    cin >> bounces; 

    for (int i = 1; i <= bounces; ++i) {
        height *= 0.5; 
        totalDistance += startHeight - height;
    }

    if (totalDistance * bouncinessIndex < 0.01)
        cout << "The total distance the ball travels is: 0.00" << endl;
    else
        cout << "The total distance the ball travels is: " << std::fixed << std::setprecision(2) << totalDistance * bouncinessIndex << endl;

    return 0;
}