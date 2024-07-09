```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n*m);
    return 1 - ((double)(m-1)) / (double)m;
}

int main() {
    cout << "The probability that Peter rolls strictly higher than Colin is: " << fixed << setprecision(5) << probability(34, 24) << endl;
}