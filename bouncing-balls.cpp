```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (startHeight / firstBounce);

    double totalDistance = 1 - pow((1 - bouncinessIndex), numBounces);
    
    cout << fixed;
    std::cout << std::setprecision(10) << totalDistance + 0.00001 << endl;

    return 0;
}