bool issame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(abs(a[i]-b[i]) > 0.0001) return false;
    }
    return true;
}