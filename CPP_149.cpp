```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b) { return (stoi(a) + stoi(b)) % 2 == 1; });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) 
                 return a.length() < b.length();
             else
                 return a < b;
         });
    
    return lst;
}