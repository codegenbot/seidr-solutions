```cpp
#include <iostream>

double probability(int n, int m) {
    double total = 1.0 * n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }

    int same = (n <= m) ? n : m;

    return (double)same / total;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = probability(n, m);
    cout << "Probability: " << result << endl;
    return 0;

}