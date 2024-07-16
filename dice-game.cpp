#include <iostream>
using namespace std;

double probability(int n, int m) {
    if(n < 1 || m < 1) return -1;
    
    double total = (double)n + (double)m - 1;
    double peterWin = (double)(n-m+1)/(total);
    
    return peterWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}