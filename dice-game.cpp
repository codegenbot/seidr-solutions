```cpp
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    double p = 0;
    for (int i = 1; i <= m - 1; ++i) {
        p += ((n - i) * 1.0 / total);
    }
    return p;
}

int main() {
    int n = 6; // Change these values to test with different dice sizes
    int m = 4;
    double probability = calculateProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}