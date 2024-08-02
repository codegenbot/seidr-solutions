#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double p = 0.0;
    if(n > m){
        p += (n - 1) / (n * 1.0);
    }
    for(int i = 1; i <= m; i++){
        p += (n - i) / (n * 1.0) * (1.0 / m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << getProbability(n, m) << endl;
    return 0;
}