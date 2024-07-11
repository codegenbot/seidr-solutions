```c++
#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n - 1; ++i) {
        if(i<m){
            p += 1.0 / n * (m - i);
        } else {
            p += 1.0 / n * (n-i+1)*(1.0/m);
        }
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double p = getProbability(n, m);
    cout << "The probability is: " << p << "\n";
    return 0;
}