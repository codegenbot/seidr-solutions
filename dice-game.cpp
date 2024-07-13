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
        int count = 0;
        for(int j = i + 1; j <= n; j++) {
            count++;
        }
        sum += (double)count / (m * (n - i));
    }

    // Calculate probability where Colin rolls m
    int count = 0;
    for(int j = 1; j < n; j++) {
        count++;
    }
    sum += (double)count / (m * n);

    // Add the probability that both roll their maximum values
    sum += (1.0 / ((double)m * (double)n));

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}