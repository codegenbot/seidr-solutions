```cpp
#include <iostream>
#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= min(n, m); i++) {
        p += (n - i) * (m - i + 1);
    }
    
    return p / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(9) << diceGame(n, m) << endl;
    return 0;
}