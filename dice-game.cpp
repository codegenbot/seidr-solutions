```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}

int main() {
    double result = probability(6, 6);
    cout << "The probability is: " << result << endl;
    return 0;
}