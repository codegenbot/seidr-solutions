bool issame(vector<string> a, vector<string> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // ...
}