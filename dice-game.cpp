#include <iostream>
using namespace std;

double solution(int n, int m) {
    double p = 0.0;
    if(n > m)
        p += (1.0 - (1.0 / n)) * (1.0 / m);
    else
        p += (1.0 - (1.0 / m)) * (1.0 / n);
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << solution(n, m) << endl;
    return 0;
}