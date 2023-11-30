#include <iostream>
#include <iomanip> 

using namespace std;

long double probability(int n, int m) {
    long double total_outcomes = n * m;
    long double peter_wins = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peter_wins++;
            }
        }
    }
    
    return peter_wins / total_outcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long double result = probability(n, m);
    cout << fixed << setprecision(8) << result << endl;
    
    return 0;
}