bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        vector<string> temp = filter_by_substring(b, a[i]);
        if(temp.size() == 0)
            return false;
    }
    return true;
}