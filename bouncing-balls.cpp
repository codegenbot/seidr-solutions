```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight; 
    cin >> startHeight;
    
    double bouncinessIndex = (startHeight > 0) ? startHeight / 2.0 : -1; 

    string strStartHeight;
    if (bouncinessIndex < 0.01)
        strStartHeight = "The bounciness index is: 0.00";
    else
        strStartHeight = "The bounciness index is: " + to_string(bouncinessIndex);
    
    cout << strStartHeight << endl;
    
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
        cout << "The total distance the ball travels is: " << fixed << setprecision(2) << totalDistance * bouncinessIndex << endl;

    return 0;
}