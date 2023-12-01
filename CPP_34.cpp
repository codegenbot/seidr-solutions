#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> result = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
    vector<int> expected = {0, 2, 3, 5, 9, 123};
    
    bool isEqual = issame(result, expected);
    
    return 0;
}