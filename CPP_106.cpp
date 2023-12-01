#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> f(int n);
vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result.push_back(factorial);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(areEqual(f(3), {1, 2, 6}));

    return 0;
}