#include <vector>
using namespace std;

double diceGame(int n, int m) {
    if(n <= 1 || m <= 1)
        return 0.0;
    
    double p = 0.0;
    
    for(int i=n+1; i<=m+n; i++)
        p += (double)1/i;
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m);
    return 0;
}