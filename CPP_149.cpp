bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        vector<string> v1,v2;
        for(string s:a)if(s.length()==a[i].length())v1.push_back(s);
        for(string s:b)if(s.length()==b[i].length())v2.push_back(s);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1!=v2)return false;
    }
    return true;
}