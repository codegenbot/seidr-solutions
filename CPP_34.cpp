#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    vector<int> l = {4, 2, 1, 2, 3, 4, 1};
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {4, 3, 2, 1};

    if (issame(a, b)) {
        return 1;
    } else {
        return 0;
    }
}