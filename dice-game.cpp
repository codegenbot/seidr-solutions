#include <iostream>
#include <cmath>
using namespace std;
double probability(int n, int m) {
    double prob = 0;
    for (int i = 1; i <= min(n, m); ++i) {
        prob += (double)n / (m * (m + 1));
    }
    return prob;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}