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
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    double probability = getProbability(n, m);
    cout << "The probability is: " << probability << endl;
    return 0;
}