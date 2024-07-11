#include <iostream>
using namespace std;

int main() {
    int n; cout << "Enter the number of sides on Peter's die: "; cin >> n;
    int m; cout << "Enter the number of sides on Colin's die: "; cin >> m;
    double result = getProbability(n, m);
    cout << "The probability is: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    double p = 0.0;
    for(int i = 1; i < n; i++) {
        p += (1.0 / n) * ((n-i) / m);
    }
    return p;
}