#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    long long count = 0; // Use long long for large inputs

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }

    return (double)count / total;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = probability(n, m);
    cout << "The probability is: " << result << endl;
    return 0;
}