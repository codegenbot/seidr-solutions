```cpp
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n + m - 1);
    return ((m * 1.0) / total);
}

int main() {
    int n = 6; // Change these values to test with different dice sizes
    int m = 4;
    double probability = calculateProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}