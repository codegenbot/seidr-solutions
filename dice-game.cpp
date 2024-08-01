#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double totalCases = (double)n * m;
    double favorableCases = 0;

    for(int i = 1; i <= m; i++) {
        favorableCases += min(n, i);
    }

    return favorableCases / totalCases;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << calculateProbability(n, m) << endl;
    return 0;
}