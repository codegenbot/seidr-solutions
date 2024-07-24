```c++
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double probability = getProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}