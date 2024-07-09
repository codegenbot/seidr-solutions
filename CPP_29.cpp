bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        bool match = true;
        size_t j = 0;
        while(j < a[i].size()) {
            if(b[i][j] != a[i][j])
                break;
            j++;
        }
        if(j < a[i].size())
            return false;
    }
    return true;
}