```c++
#include <iostream>
using namespace std;

int main() {
    double result = getProbability(4, 6); 
    cout << "Probability: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    double p = 0.0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(i > j) {
                p += (1.0 / n) * (1.0 / m);
            }
        }
    }
    return p;
}