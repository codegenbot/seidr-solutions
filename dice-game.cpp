#include <iostream>
#include <iomanip>

using namespace std;

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double higherOutcomes = n - 1;
    return higherOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    double probability = probabilityOfHigherRoll(n, m);

    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}