#include <vector>
#include <iostream>

using namespace std;

double findProbability(int n, int m) {
    double total = (long long)n * m;
    int highCount = 0;
    
    for (int i = 1; i <= min(n, m); i++) {
        if ((n - i) > (m - i)) {
            highCount += (n - i);
        }
    }
    
    return (double)highCount / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << findProbability(n, m) << endl;
    return 0;
}