```c++
#include <iostream>
using namespace std;

int main() {
    double result = getProbability(4, 6); 
    cout << "Probability: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    double p = (n - 1.0) / (n * m);
    for(int i = 2; i < n; i++) {
        p += ((i * m + n - 1) - (m + n - 1)) / (n * m);
    }
    return p;
}