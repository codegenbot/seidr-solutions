```
#include <set>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && (a==b);
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}