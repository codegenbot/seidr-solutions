```cpp
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    return ((m - 1) * 1.0 / total);
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}