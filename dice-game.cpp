#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    long long totalOutcomes = 1;
    for (int i = 1; i <= min(n, m); i++) {
        totalOutcomes *= (n - i + 1) * m; 
        if(i > 1) { 
            sum += 1.0 * ((long long)(n-1)!/(i-1)!*(n-i)) * ((m-1)!/((m-i)!*(m-(i+1)))) / totalOutcomes;
        }
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}