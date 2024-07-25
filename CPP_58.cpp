#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    
    return s1 == s2;
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

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}