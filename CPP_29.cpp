bool issame(vector<string> a, vector<string> b){
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](string s) { 
        return find(b.begin(), b.end(), s) != b.end(); 
    });
}