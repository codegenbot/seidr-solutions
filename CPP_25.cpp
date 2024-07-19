#include <vector>

vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> factors;
    for (int i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            factors.push_back(i);
            a /= i;
        }
    }
    if (a > 1) {
        factors.push_back(a);
    }
    return factors;
}