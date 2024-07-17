#include <iostream>
using namespace std;

double probability(int n, int m) {
    double totalPossibilities = (double)n * m;
    double favorablePossibilities = min(n, m);

    return 1.0 - (favorablePossibilities / totalPossibilities);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << fixed << setprecision(2) << probability(n, m) << endl;

    return 0;
}