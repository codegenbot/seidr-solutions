#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double totalPossibilities = (long long)n * m;
    double probability = 0.0;

    for(int i = 1; i <= n - 1; i++) {
        if(i > m)
            probability += m;
        else
            probability += 1.0;
    }

    return probability / totalPossibilities;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}