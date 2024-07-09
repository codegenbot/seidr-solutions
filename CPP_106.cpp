#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i * 3);
    }
    return result;
}

int main() {
    assert(issame(f(3), {3, 6, 9}));
    return 0;
}