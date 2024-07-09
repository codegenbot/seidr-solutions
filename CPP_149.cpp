bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++) {
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}