vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){return a.length() % 2 == 1 && a.length() != b.length();});
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return issame({a}, {b});
            }
        });
    
    return lst;
}

bool issame(vector<string> a, vector<string>b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a==b;
}