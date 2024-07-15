bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> removeDuplicates(const vector<int>& l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}