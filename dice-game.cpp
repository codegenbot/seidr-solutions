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
    cout << setiosflags(ios_base::fixed) << setprecision(5);
    cout << "The probability that Peter rolls strictly higher than Colin is: "
         << probability(6, 6) << endl;
    return 0;
}