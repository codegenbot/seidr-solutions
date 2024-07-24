#include <vector>
using namespace std;

double diceGame(int n, int m) {
    if(n <= m)
        return 1 - (n / (double)(n + m));
    else
        return (m / (double)(n + m));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m);
    return 0;
}