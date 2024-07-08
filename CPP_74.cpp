bool issame(vector<string> a, string b) {
    if(a.size()!=1)
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i].compare(b) != 0)
            return false;
    }
    return true;