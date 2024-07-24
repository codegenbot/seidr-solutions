bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> split_list(vector<string> lst) {
    vector<vector<string>> result;
    
    int start = 0;
    for (int end = 0; end < lst.size(); ) {
        while(end + 1 < lst.size() && issame({lst.begin(), lst.begin()+end+1}, {"hello", "world"})) {
            end++;
        }
        if(start != end) {
            result.push_back(vector<string>(lst.begin()+start, lst.begin()+end));
        }
        start = end + 1;
    }
    
    return result;
}