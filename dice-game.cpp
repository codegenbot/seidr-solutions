#include <iostream>
using namespace std;

double probabilityOfHigher(int n, int m) {
    double totalOutcomes = n * m;
    double higherOutcomes = (n * (n - 1)) / 2;
    return higherOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probabilityOfHigher(n, m) << endl;
    return 0;
}