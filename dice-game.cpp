#include <iostream>
using namespace std;

double game(int n, int m) {
    double total = (double)n * m;
    double peters_win = 0.0;
    
    for (int i = n; i <= m; i++) {
        peters_win += ((double)(n - i + 1)) / total;
    }
    
    return peters_win;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << game(n, m) << endl;
    return 0;
}