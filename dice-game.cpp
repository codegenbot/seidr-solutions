#include <iostream>
using namespace std;

double probability(int n, int m) {
    double numerator = 1.0;
    double denominator = 1.0;
    
    // calculate the numerator (number of ways Peter can roll strictly higher than Colin)
    for (int i = 1; i <= m; i++) {
        numerator += pow(m, i);
    }
    
    // calculate the denominator (total number of possible rolls)
    denominator = n * m;
    
    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}