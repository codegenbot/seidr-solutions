#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert(issame(unique(l) , unique({0, 2, 3, 5, 9, 123})));
    return 0;
}