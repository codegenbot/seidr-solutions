#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int startHeight, firstBounce, numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    cout << fixed << setprecision(2);
    for (int i = 0; i <= numBounces; ++i) {
        int height = static_cast<int>(firstBounce * pow(0.5, i));
        firstBounce = height;
        cout << height << " ";
    }
    return 0;
}