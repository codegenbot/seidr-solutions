bool issame(vector<string> a,vector<string>b){
    vector<string> lst;
    for(auto x : a) {
        bool found = false;
        for(auto y : b) {
            if(x.length() == y.length()) {
                lst.push_back(x);
                found = true;
                break;
            }
        }
        if(!found) {
            return false;
        }
    }
    return true;
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
    assert(sorted_list_sum({{"aaaa", "bbbb", "dd", "cc"}}) == sorted_list_sum({{"cc","dd","aaaa","bbbb"}}));
    return 0;
}