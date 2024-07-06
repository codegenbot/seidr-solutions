vector<string> issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return {};
    for(int i = 0; i < a.size(); i++) {
        if(!filter_by_substring({a[i], b[i]}, " ").second.empty())
            return {};
    }
    return a;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}) );
    // ...
}