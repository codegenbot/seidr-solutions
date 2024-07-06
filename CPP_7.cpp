```
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& str : b) {
            if(str == a[i]) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    assert(issame(result, {"grunt", "prune"}));
    return 0;
}