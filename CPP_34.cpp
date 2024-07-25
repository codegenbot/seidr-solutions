#include <algorithm>
#include <vector>
using namespace std;

bool isSameSet(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    unique_copy(l.begin(), unique(l.begin(), l.end()), l.end());
    return l;
}