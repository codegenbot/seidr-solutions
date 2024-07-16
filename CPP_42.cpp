bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}