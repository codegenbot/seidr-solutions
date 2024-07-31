#include <vector>

bool issame(const vector<int> a, const vector<int> b) {
    return a == b;
}

vector<int> tri(int n){
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

int main() {
    assert(issame(tri(1), {1, 3}));
    return 0;
}