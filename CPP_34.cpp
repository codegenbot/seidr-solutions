#include <algorithm>
#include <vector>
#include <set>

bool isSameSet(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

std::vector<int> removeDuplicates(std::vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}