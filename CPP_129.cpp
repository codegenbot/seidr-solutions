#include <vector>
#include <cassert>

using namespace std;

bool issameVector(const vector<int>& a, const vector<int>& b) {
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

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    vector<int> path;
    
    for (int i = 0; i < k; ++i) {
        path.push_back(i % 2 == 0 ? 1 : 3);
    }
    
    return path;
}

int main() {
    assert(issameVector(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}