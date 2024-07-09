bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(issame_helper(a[i], b[i]))) {
            return false;
        }
    }
    return true;
}

bool issame_helper(string s1, string s2) {
    vector<int> v1,v2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='x')v1.push_back(i);
        if(s2[i]=='x')v2.push_back(i);
    }
    if(v1.size()!=v2.size())return false;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v2[i])return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            return (a.length() % 2 != 0 && b.length() % 2 == 0) ||
                   (a.length() % 2 == 0 && b.length() % 2 != 0);
    });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    return lst;
}