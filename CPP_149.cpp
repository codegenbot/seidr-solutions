bool issame(vector<string> a, vector<string> b) {
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++)if(a[i].size()!=b[i].size())return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}