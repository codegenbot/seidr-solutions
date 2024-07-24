vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++) {
        bool same = false;
        if(i < b.size()) {
            same = (a[i] == b[i]);
        }
        result.push_back(same);
    }
    return result;
}