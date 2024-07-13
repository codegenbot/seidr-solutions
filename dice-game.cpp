#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double totalCases = (long long)n * m;
    double successfulCases = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                successfulCases++;
            }
        }
    }
    
    return successfulCases / totalCases;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << calculateProbability(n, m) << endl;
    return 0;
}