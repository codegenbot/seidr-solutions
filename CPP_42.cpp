bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (auto& num : result) {
        num++;
    }
    return result;
}