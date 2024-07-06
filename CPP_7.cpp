bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        string s1 = filter_by_substring({a[i], b[i]}, substring);
        bool containsSameSubstring = (s1.size() && !s1.empty());
        if(!containsSameSubstring)
            return false;
    }
    return true;
}