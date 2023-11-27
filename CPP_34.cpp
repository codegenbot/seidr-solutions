#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    l = unique(l);
    assert(issame(l, {0, 2, 3, 5, 9, 123}));

    return 0;
}