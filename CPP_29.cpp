bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        int pos = a[i].find(prefix);
        if(pos == string::npos || a[i].substr(0,pos) != prefix) return false;
    }
    return true;
}