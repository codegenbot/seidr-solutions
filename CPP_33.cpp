#include <vector>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    for (size_t i = 2; i < l.size(); i += 3) {
        for (size_t j = i; j > 0 && l[j] < l[j - 1]; j--) {
            swap(l[j], l[j - 1]);
        }
    }
    return l;
}

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

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}