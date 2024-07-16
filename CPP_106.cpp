#include <vector>
#include <cassert>

vector<int> f(int n) {
    vector<int> result;
    int factorial = 1, sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}