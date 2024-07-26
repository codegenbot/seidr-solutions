#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> tri(int n) {
    vector<int> result;
    result.push_back(3);
    if (n == 0) {
        return result;
    }
    result.push_back(1);
    if (n == 1) {
        return result;
    }
    result.push_back(2);
    if (n == 2) {
        return result;
    }
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}

vector<int> result = tri(n);
vector<int> expected = tri(n);
if (issame(result, expected)) {
    cout << "Result is correct." << endl;
} else {
    cout << "Result is incorrect." << endl;
}