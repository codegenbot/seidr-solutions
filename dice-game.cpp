#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double result = 0;
    
    for (int i = 1; i <= m - 1; i++) {
        if (n > i) {
            result += 1.0 / n;
        }
    }
    
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2);
    cout << getProbability(n, m) << endl;
    return 0;
}