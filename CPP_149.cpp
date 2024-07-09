bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        bool same = true;
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) {
                same = false;
                break;
            }
        }
        if(!same) return false;
    }
    return true;
}