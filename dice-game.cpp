#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    
    double p = 0;
    for (int i = 1; i < m; i++) { 
        p += (double)(n - i + 1) / total;
    }
    
    if(n >= m) {
        p += (double)(m-1)/total;
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m; 
    cout << fixed << setprecision(6) << probability(n, m); 
    return 0;
}