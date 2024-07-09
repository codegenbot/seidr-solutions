bool issame(const vector<float>& a, const vector<float>& b){
    if(a.size() != b.size())return false;
    for(int i = 0; i < a.size(); i++){
        if(abs(a[i] - b[i]) > 1e-9)return false;
    }
    return true;
}