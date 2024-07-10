#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            int fact = 1;
            for (int j = 1; j <= i; ++j) {
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(f(3), {1, 2, 6}));
    return 0;
}