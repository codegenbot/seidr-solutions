```cpp
vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

bool sameSets(vector<int> a,vector<int>b){
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}