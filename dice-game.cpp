```cpp
#include <iostream>
#include <iomanip>

using namespace std;

double getProbability(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i < n; ++i) {
        probability += (double)(n - i) / (n * m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << getProbability(n, m) << endl;
    return 0;
}