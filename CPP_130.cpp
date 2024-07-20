#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> tri(int n) {
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n >= 1) {
            result.push_back(1);
            if (n >= 2) {
                result.push_back(2);
                int t0 = 3, t1 = 1, t2 = 2;
                for (int i = 3; i <= n; ++i) {
                    int current = (i % 2 == 0) ? 1 + i / 2 : t0 + t1 + t2;
                    result.push_back(current);
                    t0 = t1;
                    t1 = t2;
                    t2 = current;
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(tri(1), {1, 3}));
    
    return 0;
}