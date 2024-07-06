bool issame(vector<string> a,vector<string>b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}