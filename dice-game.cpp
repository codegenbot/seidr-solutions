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
    
    // Calculate probability where Colin rolls 1 to m-1
    for(int i = 1; i < m; i++) {
        sum += (1.0 / (double)m) * ((n - m + 1));
    }

    // Calculate probability where Peter rolls strictly higher than Colin's maximum roll
    sum += (1.0 / (double)n) * ((m - 1));

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}