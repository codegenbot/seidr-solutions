bool issame(vector<float> a,vector<float>b){
    if(a.size()!=b.size()) return false;
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}