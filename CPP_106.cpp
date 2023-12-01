#include <vector>

vector<int> f(int n) {
    vector<int> result(n);
    int factorial = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = factorial;
            factorial *= (i + 1);
        } else {
            sum += (i + 1);
            result[i] = sum;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
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

int main() {
    assert(issame(f(4), {1, 2, 6, 4}));
    return 0;
}