#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = m; i < n * m; i++) { 
        p += 1.0 / total;
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m; // Take input from user
    cout << fixed << setprecision(6) << probability(n, m); // Call your probability function and print output
    return 0;
}