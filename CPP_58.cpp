#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> result;
    
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(result, result.begin()));
    
    vector<int> res;
    for (int i : result) {
        res.push_back(i);
    }
    sort(res.begin(), res.end());
    return res;
}