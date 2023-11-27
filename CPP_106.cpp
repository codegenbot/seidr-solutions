#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool are_same(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> f_output(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result.push_back(factorial);
        }
        else {
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
    assert(are_same(f_output(3), {1, 2, 6}));

    return 0;
}