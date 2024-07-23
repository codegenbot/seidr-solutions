```cpp
#include <set>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) return false;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}