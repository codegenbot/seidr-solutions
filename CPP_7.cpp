bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        bool found = false;
        for(const auto& s : b) {
            if(a[i].find(s) != string::npos)
                found = true;
        }
        if(!found)
            return false;
    }
    return true;
}