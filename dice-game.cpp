#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter number of sides for Colin's die: ";
    cin >> m;
    double result = getProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    double num = 0.0;
    for(int i=1; i<m; ++i){
        num += (double)1/(m);
    }
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}