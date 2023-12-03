#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (n * (n - 1)) / 2;
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    double probability = calculateProbability(n, m);
    cout << probability << endl;
    return 0;
}