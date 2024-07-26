#include <vector>
#include <cassert>

using namespace std;

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

vector<int> tri(int a) {
    return {a, a + 2};
}

int main() {
    assert(issame(vector<int>{1}, vector<int>{1}));
    assert(issame(vector<int>{1, 3}, tri(1)));
    return 0;
}