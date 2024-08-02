bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    for (const auto& s : a) {
        if (std::find(b.begin(), b.end(), s) == b.end()) {
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // ...
}