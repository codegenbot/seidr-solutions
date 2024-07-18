vector<int> count_up_to(int n){
    vector<int> result(n-1);
    for(int i = 2; i <= n; ++i){
        result[i-2] = i;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}