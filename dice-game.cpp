#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    
    for (int i = 1; i <= min(n, m); i++) {
        p += pow(1.0 / n, i) * pow(1.0 / m, m-i);
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}