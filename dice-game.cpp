```cpp
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n + m - 1);
    for (int i = 1; i <= m; i++) {
        total -= 1.0;
    }
    return total / ((n * m));
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}