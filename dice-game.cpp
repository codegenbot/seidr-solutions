#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;
    
    for (int i = 1; i <= min(n - 1, m); i++) { 
        if(i+1>n){
            p += (double)(n - i) / total;
        }
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m; 
    cout << fixed << setprecision(6) << probability(n, m); 
    return 0;
}