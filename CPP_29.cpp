bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        if (i >= a.size() || i >= b.size()) {
            return false;
        }
        if (!a[i].compare(0, b[i].size(), b[i])) {
            return true;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}