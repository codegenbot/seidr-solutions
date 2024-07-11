#include <iostream>
#include <iomanip>

using namespace std;

double getProbability(int n, int m) {
    double sum = 0.0;
    for(int k=m+1; k<=n; k++){
        sum += 1.0 / (m-1);
    }
    return 1.0 * sum / n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << getProbability(n, m) << endl;
    return 0;
}