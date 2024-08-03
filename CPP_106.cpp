#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> f(int n) {
    return {1, 2, n};
}

int main() {
    assert(issame(f(6), {1, 2, 6}));
    return 0;
}