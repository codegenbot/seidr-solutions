#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = (i % 2 == 0) ? (i == 0 ? 1 : result[i - 1] * i) : (i * (i + 1) / 2);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    cout << "Test passed successfully!" << endl;
    return 0;
}