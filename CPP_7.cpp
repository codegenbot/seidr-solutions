````
bool issame(const vector<string>& a, const vector<string>& b) {
    for (const auto& str : a) {
        if (find(b.begin(), b.end(), str) == b.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}