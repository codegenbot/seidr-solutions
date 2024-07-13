```c++
#include <iostream>
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    int numBounces; 

    cin >> startHeightStr >> firstBounceStr >> numBounces; 

    double bouncinessIndex = (stod(firstBounceStr) / stod(startHeightStr));
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (stod(startHeightStr) * bouncinessIndex); 
        startHeightStr = to_string((double)stod(startHeightStr) / 2);
    }

    std::cout << std::fixed;
    std::cout.precision(10);
    std::cout << totalDistance << endl;

    return 0;
}