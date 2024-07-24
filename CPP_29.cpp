vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++) {
        if(i >= b.size() || a[i] != b[i]) {
            result.push_back(false);
        } else {
            result.push_back(true);
        }
    }
    return result;
}