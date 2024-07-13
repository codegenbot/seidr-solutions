#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    // Calculate total combinations
    int totalCombinations = n * m;

    // Calculate probability where Peter rolls strictly higher than Colin
    sum += (n - m) / (double)totalCombinations;

    // Calculate probability where Peter and Colin roll the same number
    sum += (m > n ? m : n) / (double)totalCombinations;

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}