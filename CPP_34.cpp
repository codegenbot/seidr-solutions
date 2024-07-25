```cpp
vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    vector<int> temp = l;
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    return temp;
}

bool checkEquality(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}