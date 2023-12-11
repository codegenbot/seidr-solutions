#include <iostream>
#include <iomanip>
using namespace std;

long double probability(int n, int m) {
    long double total_outcomes = n * m;
    long double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    long double result = favorable_outcomes / total_outcomes;
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long double result = probability(n, m);
    
    cout << setprecision(8) << fixed << result << endl;
    
    return 0;
}