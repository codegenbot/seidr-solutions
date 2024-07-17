#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;
    
    for(int i = m+1; i <= n; i++) {
        peterWins += (double)(i - m);
    }
    
    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}