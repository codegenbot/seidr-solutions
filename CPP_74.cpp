bool issame(vector<string> a,vector<string>b) {
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        if (i >= a.size()) return false;
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        if(issame(lst1,lst2)) return lst1;
        for(const string& s : lst1){
            vector<string> v = {s};
            v.insert(v.end(),lst2.begin(),lst2.end());
            return v;
        }
    }
}