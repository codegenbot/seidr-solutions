```c++
#include <iostream>
using namespace std;

int main() {
    double result = getProbability(4, 6); // example input values
    cout << "Probability: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    if(n <= m)
        return 0.0; 
    double p = 0;
    for(int i = 1; i < m; i++) {
        p += (1.0 * (n - i)) / (n * m);
    }
    return p;
}