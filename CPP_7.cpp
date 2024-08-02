bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&](auto x) {return find_all(b,x)!=b.end(); });
}