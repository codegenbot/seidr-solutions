bool issame(vector<string> a, string b) {
    if(a.size()!=1 || a[0].compare(b)!=0)
        return false;
    return true;
}