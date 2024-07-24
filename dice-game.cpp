```c++
#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}

int main() {
    int n = 6; 
    int m = 6; 
    double probability = getProbability(n, m);
    cout << "The probability is: " << probability << endl;
    return 0;
}