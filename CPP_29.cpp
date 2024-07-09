bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        bool match = true;
        size_t pos = 0;
        while(pos < a[i].size()) {
            if(b[i][pos] != a[i][pos])
                break;
            pos++;
        }
        if(pos < a[i].size())
            return false;
    }
    return true;
}