#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total_outcomes = n * m;
    double peter_wins = 0;
    
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
    
    double result = probability(n, m);
    cout << result << endl;
    
    return 0;
}