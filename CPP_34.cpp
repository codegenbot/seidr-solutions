```cpp
vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    auto it = unique(l.begin(), l.end());
    l.erase(it, l.end());
    return l;
}

bool checkEquality(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}