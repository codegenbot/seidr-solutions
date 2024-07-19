#include <vector>
#include <set>

bool check_common(vector<int> a, vector<int> b) {
    set<int> result;
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        result.insert(b[i]);
    }
    return result == set<int>(a.begin(), a.end()) || result == set<int>(b.begin(), b.end());
}

bool issame(vector<int> a, vector<int> b) {
    return check_common(a, b);
}

int main() {
    assert(check_common({4, 3, 2, 8}, {} , {}) );
    return 0;
}