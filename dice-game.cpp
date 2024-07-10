#include <vector>
using namespace std;

double diceGame(int n, int m) {
    return (double)(m-1) / (n+m-2);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << fixed << diceGame(n, m) << endl;
    return 0;
}