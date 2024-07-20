#include <algorithm>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b){
    vector<int> l = a;
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l == b;
}