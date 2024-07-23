```c++
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum - (1.0 / m);
}

int main() {
    int n, m;
    cout << "Enter number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter number of sides for Colin's die: ";
    cin >> m;
    cout << "Probability that Peter rolls strictly higher than Colin: " << probability(n, m) << endl;
    return 0;
}