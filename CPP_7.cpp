bool issame(vector<string> a, vector<string> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (size_t i = 0; i < min(a.size(), b.size()); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    assert(issame(filter_by_substring(strings, substring),{"grunt","prune"}));
    return 0;
}