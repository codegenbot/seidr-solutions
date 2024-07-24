vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++) {
        bool same = false;
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                same = true;
                break;
            }
        }
        result.push_back(same);
    }
    return result;
}