bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i].length() % 2 == 1 && b[i].length() % 2 == 0)return false;
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

    vector<string> result;
    for(string s:lst){
        int sum = 0;
        for(char c:s){
            sum += c;
        }
        bool valid = true;
        for(string str:lst){
            if(sum == std::stoi(str)){
                valid = false;
                break;
            }
        }
        if(valid)result.push_back(s);
    }

    return result;
}

int main() {
    assert (issame({{"aaaa", "bbbb", "dd", "cc"}}, {{"cc","dd","aaaa","bbbb"}}));
    return 0;
}