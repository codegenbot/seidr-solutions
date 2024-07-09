```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    bool same = issame(lst1, lst2);
    
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2 && !same) return lst1;
    else if (sum1 > sum2 && !same) return lst2;
    else if (!same) return lst1;  // same vectors, so choose the one with less characters
    else return lst1;  // same vectors and same lengths, so choose the first one
}