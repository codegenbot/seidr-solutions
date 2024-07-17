#include <vector>
using namespace std;

double getProbability(int n, int m) {
    if(n <= m) return 1.0 - (double)m / (n * 1.0);
    else return (double)(m-1) / (n * 1.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}