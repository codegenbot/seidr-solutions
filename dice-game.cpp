#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= m; i++) {
        probability += (n - i) / (n * m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << calculateProbability(n, m) << endl;
    return 0;
}