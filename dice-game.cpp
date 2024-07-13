#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double numerator = 0;
    double denominator = 1;
    
    for (int i = 1; i <= m && i < n; i++) {
        numerator += 1;
        denominator += 1;
    }
    
    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}