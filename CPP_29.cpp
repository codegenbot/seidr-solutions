bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix(vector<string> {"apple", "banana", "apricot"}, "a"), vector<string> {"apple", "apricot"}));
    return 0;
}