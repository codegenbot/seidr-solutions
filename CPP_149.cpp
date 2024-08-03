bool issame(vector<string> a,vector<string>b){
    vector<string> merged = a;
    merged.insert(merged.end(), b.begin(), b.end());
    sort(merged.begin(), merged.end());

    return merged == a;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b){ return a.length() % 2 == 1 && b.length() % 2 == 0; });
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

int main() {
    assert(sorted_list_sum({{"aaaa", "bbbb", "dd", "cc"}}) == {{"aa","bb","cc","dd"}});
    return 0;
}