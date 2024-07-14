#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n*m);
    double count = 0;
    
    for(int i=1; i<=m; i++) {
        for(int j=i+1; j<=n; j++) {
            count++;
        }
    }
    
    return count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}