#include <iostream>
#include <sstream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= m; i++) {
        p += (n - i) / total;
    }

    return p;
}

int main() {
    string temp1, temp2;
    cin >> temp1 >> temp2;
    int n = stoi(temp1);
    int m = stoi(temp2);
    cout << fixed << setprecision(2) << (double)diceGame(n, m) << endl;
    return 0;
}